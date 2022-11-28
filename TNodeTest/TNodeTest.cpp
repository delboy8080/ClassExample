#include "pch.h"
#include "CppUnitTest.h"
#include "..\ClassExample\TNode.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TNodeTest
{
	TEST_CLASS(TNodeTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			TNode<int, int> node(1 ,1);
			Assert::AreEqual(1, node.getData());


		}
	};
}
