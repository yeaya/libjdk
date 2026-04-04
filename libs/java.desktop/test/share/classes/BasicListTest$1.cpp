#include <BasicListTest$1.h>
#include <BasicListTest.h>
#include <javax/swing/AbstractListModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;

void BasicListTest$1::init$() {
	$AbstractListModel::init$();
	$set(this, strings, $new($StringArray, {
		"Item 1"_s,
		"Item 2"_s,
		"Item 3"_s,
		"Item 4"_s,
		"Item 5"_s
	}));
}

int32_t BasicListTest$1::getSize() {
	return $nc(this->strings)->length;
}

$Object* BasicListTest$1::getElementAt(int32_t i) {
	return $of($nc(this->strings)->get(i));
}

BasicListTest$1::BasicListTest$1() {
}

$Class* BasicListTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"strings", "[Ljava/lang/String;", nullptr, 0, $field(BasicListTest$1, strings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasicListTest$1, init$, void)},
		{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicListTest$1, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(BasicListTest$1, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"BasicListTest",
		"initComponents",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"BasicListTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"BasicListTest$1",
		"javax.swing.AbstractListModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"BasicListTest"
	};
	$loadClass(BasicListTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicListTest$1));
	});
	return class$;
}

$Class* BasicListTest$1::class$ = nullptr;