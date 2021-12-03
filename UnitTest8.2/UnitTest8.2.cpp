#include "pch.h"
#include "CppUnitTest.h"
#include "../8.2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = {"ho(oh(oh)oh)ho"};
			string res =Change(str);
			string d = {"hoho"};
			Assert::AreEqual(res, d);
		}
	};
}
