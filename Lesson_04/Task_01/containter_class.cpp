/*
1.  Добавить в контейнерный класс, который был написан в этом уроке, методы:

    • для удаления последнего элемента массива (аналог функции pop_back() в векторах)
    • для удаления первого элемента массива (аналог pop_front() в векторах)
    • для сортировки массива
    • для вывода на экран элементов.

*/

#include <iostream>

#include <cassert> // для assert()

class ArrayInt
{
private:
  int m_length;
  int* m_data;

public:
  ArrayInt(): m_length(0), m_data(nullptr) { }

  ArrayInt(int length):
  m_length(length)
  {
    assert(length >= 0);

    if (length > 0) {
      m_data = new int[length];
    } else {
      m_data = nullptr;
    }
  }

  ~ArrayInt()
  {
    delete[] m_data;
  }

  void erase()
  {
    delete[] m_data;

    // Здесь нам нужно указать m_data значение nullptr, чтобы на выходе не было висячего указателя
    m_data = nullptr;
    m_length = 0;
  }

  int getLength() { return m_length; }

  int& operator[](int index)
  {
    assert(index >= 0 && index < m_length);
    return m_data[index];
  }

// Функция resize изменяет размер массива. Все существующие элементы сохраняются. Процесс медленный
  void resize(int newLength)
  {
    // Если массив уже нужной длины — return
    if (newLength == m_length) {
      return;
    }

    // Если нужно сделать массив пустым — делаем это и затем return
    if (newLength <= 0) {
      erase();
      return;
    }

    // Теперь знаем, что newLength >0
    // Выделяем новый массив
    int *data = new int[newLength];

    // Затем нужно разобраться с количеством копируемых элементов в новый массив
    // Нужно скопировать столько элементов, сколько их есть в меньшем из массивов
    if (m_length > 0) {
      int elementsToCopy = (newLength > m_length) ? m_length : newLength;

      // Поочередно копируем элементы
      for (int index=0; index < elementsToCopy ; ++index) {
        data[index] = m_data[index];
      }
    }

    // Удаляем старый массив, так как он нам уже не нужен
    delete[] m_data;

    // И используем вместо старого массива новый! Обратите внимание, m_data указывает
    // на тот же адрес, на который указывает наш новый динамически выделенный массив. Поскольку
    // данные были динамически выделенные — они не будут уничтожены, когда выйдут из области видимости
    m_data = data;
    m_length = newLength;
  }

  void insertBefore(int value, int index)
  {
    // Проверка корректности передаваемого индекса
    assert(index >= 0 && index <= m_length);

    // Создаем новый массив на один элемент больше старого массива
    int* data = new int[m_length+1];

    // Копируем все элементы до index-а
    for (int before=0; before < index; ++before) {
      data[before] = m_data[before];
    }

    // Вставляем новый элемент в новый массив
    data [index] = value;

    // Копируем все значения после вставляемого элемента
    for (int after=index; after < m_length; ++after) {
      data[after+1] = m_data[after];
    }

    // Удаляем старый массив и используем вместо него новый 
    delete[] m_data;
    m_data = data;
    ++m_length;
  }

  void push_back(int value) { insertBefore(value, m_length); }

  void pop_back()
  {
      if (m_length > 0)
      {
          int* data = new int[m_length - 1];
          for (int i = 0; i < m_length - 1; i++)
          {
              data[i] = m_data[i];
          }

          delete m_data;
          m_data = data;
          m_length--;
      }
      else
      {
          std::cout << "Array is empty!\n";
      }
  }

  void pop_front()
  {
      if (m_length > 0)
      {
          int* data = new int[m_length - 1];
          for (int i = 0; i < m_length - 1; i++)
          {
              data[i] = m_data[i + 1];
          }

          delete m_data;
          m_data = data;
          m_length--;
      }
      else
      {
          std::cout << "Array is empty!\n";
      }
  }

  // пузырьковая сортировка
  void sort()
  {
      for (int i = 0; i < m_length - 1; i++)
      {
          for (int j = i + 1; j < m_length; j++)
          {
              if (m_data[i] < m_data[j])
              {
                  int tmp = m_data[i];
                  m_data[i] = m_data[j];
                  m_data[j] = tmp;
              }
          }
      }
  }
  
  // вывод массива данных на экран
  void printArray()
  {
      if (m_length > 0)
      {
          std::cout << "Array contains: ";
          for (int i = 0; i < m_length; i++)
          {
              std::cout << m_data[i] << " ";
          }
          std::cout << std::endl;
      }
      else
      {
          std::cout << "Array is empty!\n";
      }
  }
};

int main(int argc, char* argv[])
{
  ArrayInt arrayInt;
  arrayInt.push_back(100);
  arrayInt.push_back(0);
  arrayInt.push_back(1);
  arrayInt.push_back(10);

  arrayInt.printArray();
  arrayInt.sort();
  arrayInt.printArray();
  arrayInt.pop_back();
  arrayInt.printArray();
  arrayInt.push_back(17);
  arrayInt.printArray();
  arrayInt.pop_front();
  arrayInt.printArray();

  return 0;
}
