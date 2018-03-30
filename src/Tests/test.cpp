#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"
using testing::Eq;
namespace {
	class ClassDeclaration: public testing::Test {
		public:
			ClassName obj;
			ClassDeclaration() {
				obj;
			}
	};
}
TEST_F(ClassDeclaration, userTest1) {
	obj.setAge(22);
	ASSERT_EQ(22, obj.getAge());
	ASSERT_EQ("", "");
}
TEST_F(ClassDeclaration, userTest2) {
	obj.setAge(58);
	ASSERT_THAT(58, testing::Eq(obj.getAge()));
	ASSERT_EQ("", "");
}
