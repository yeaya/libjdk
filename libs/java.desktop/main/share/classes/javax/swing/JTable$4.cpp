#include <javax/swing/JTable$4.h>
#include <javax/swing/JTable$Resizable3.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $JTable$Resizable3 = ::javax::swing::JTable$Resizable3;

namespace javax {
	namespace swing {

void JTable$4::init$($JTable* this$0, $JTable$Resizable3* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

int32_t JTable$4::getElementCount() {
	return $nc(this->val$r)->getElementCount();
}

int32_t JTable$4::getLowerBoundAt(int32_t i) {
	return $nc(this->val$r)->getLowerBoundAt(i);
}

int32_t JTable$4::getUpperBoundAt(int32_t i) {
	return $nc(this->val$r)->getMidPointAt(i);
}

void JTable$4::setSizeAt(int32_t newSize, int32_t i) {
	$nc(this->val$r)->setSizeAt(newSize, i);
}

JTable$4::JTable$4() {
}

$Class* JTable$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$4, this$0)},
		{"val$r", "Ljavax/swing/JTable$Resizable3;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$4, val$r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/JTable$Resizable3;)V", "()V", 0, $method(JTable$4, init$, void, $JTable*, $JTable$Resizable3*)},
		{"getElementCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTable$4, getElementCount, int32_t)},
		{"getLowerBoundAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTable$4, getLowerBoundAt, int32_t, int32_t)},
		{"getUpperBoundAt", "(I)I", nullptr, $PUBLIC, $virtualMethod(JTable$4, getUpperBoundAt, int32_t, int32_t)},
		{"setSizeAt", "(II)V", nullptr, $PUBLIC, $virtualMethod(JTable$4, setSizeAt, void, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JTable",
		"adjustSizes",
		"(JLjavax/swing/JTable$Resizable3;Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$4", nullptr, nullptr, 0},
		{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$4",
		"java.lang.Object",
		"javax.swing.JTable$Resizable2",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$4);
	});
	return class$;
}

$Class* JTable$4::class$ = nullptr;

	} // swing
} // javax