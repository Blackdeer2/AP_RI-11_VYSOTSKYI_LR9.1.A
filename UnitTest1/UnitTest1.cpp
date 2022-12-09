#include "pch.h"
#include "CppUnitTest.h"
#include "../PR9.1/PR9.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Student* p = new Student;    
			p->prizv = "Ivanenko";      
			p->kurs = I;  
			p->spec = IT;
			p->physic = 5;
			p->math = 5;
			p->infor = 5;

			double t = Average(p, 1);

			Assert::AreEqual(t, 100.);

		}
	};
}
