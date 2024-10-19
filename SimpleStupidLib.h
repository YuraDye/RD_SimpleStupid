using System;

// Метод нижче перевіряє значення 'a' й повертає результат перевірки. 
// Надійно, як швейцарський годинник, або як казав мій дід: "я твій дід!"

namespace SimpleStupidLib
{
    public class Processor
    {
        public bool IsItTrue(bool a)
        {
            bool b = false;
            // -------------------------------------------------------

            if (a == true) b = true; else if (a == false) b = false;
     
            // -------------------------------------------------------
            return b;
        }
    }
// ЗАСТОСУВАННЯ:
// Клас Program нижче демонструє, як застосувати клас Processor.
// Створюється екземпляр Processor, і викликається метод IsItTrue.
// Результат потім виводиться на консоль.

  class Program
  {
      static void Main(string[] args)
      {
          Processor processor = new Processor();
          bool result = processor.IsItTrue(true);
          Console.WriteLine($"Result: {result}"); // Output: Result: True
      }
  }
}
