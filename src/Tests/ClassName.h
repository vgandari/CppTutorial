#ifndef SETTINGUP_GOOGLETEST_CLASSNAME_H
#define SETTINGUP_GOOGLETEST_CLASSNAME_H
class ClassName {
	public:
		int age;
		int getAge() const {
			return (age);
		}

		void setAge(int age) {
			ClassName::age = age;
		}
};

#endif
