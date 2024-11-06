#include "pch.h"
#include "CppUnitTest.h"
#include "../sum.h"
#include "../sum.cpp"
#include "../var.h"
#include "../var.cpp"
#include "../dod.h"
#include "../dod.cpp"
#include "../lab 9.1.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsSum;
using namespace nsDod;
using namespace nsVar;


namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Ініціалізація тестових значень
			x = 0.9;
			eps = 0.000001;

			// Виклик функції обчислення суми
			sum();

			// Перевірка результату
			Assert::AreEqual(2.94443, s, 0.0001); // Очікуване значення s для x = 0.9

			
		}
	};
}

