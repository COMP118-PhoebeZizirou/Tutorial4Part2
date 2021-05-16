/**
* @TODO
* Details Unit tests for the matrix library...
*/

#include "pch.h"
#include "CppUnitTest.h"
#include "../Tutorial4Part2/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForLab4
{
	TEST_CLASS(UnitTestForLab4)
	{
	public:

		//Testing sumOfRows
		
		TEST_METHOD(TestMethodForsumOfRow)
		{
			//Arrange

			const int MAX_ROW = 5;
			double matrix[MAX_ROW][MAX_COL] = { 1 , 1, 1 };

			//Act

			double sum0 = sumOfRow(matrix, 0, MAX_ROW);
			double sum1 = sumOfRow(matrix, 1, MAX_ROW);

			//Assert

			Assert::AreEqual(3.0, sum0);
			Assert::AreEqual(0.0, sum1);
		}
	};
}
