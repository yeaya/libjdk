#include <javax/swing/SpringLayout$Constraints$2.h>
#include <javax/swing/Spring$SpringMap.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $Spring$SpringMap = ::javax::swing::Spring$SpringMap;
using $SpringLayout$Constraints = ::javax::swing::SpringLayout$Constraints;

namespace javax {
	namespace swing {

void SpringLayout$Constraints$2::init$($SpringLayout$Constraints* this$0, $Spring* s) {
	$set(this, this$0, this$0);
	$Spring$SpringMap::init$(s);
}

int32_t SpringLayout$Constraints$2::map(int32_t i) {
	return this->this$0->getHeightFromBaseLine(i);
}

int32_t SpringLayout$Constraints$2::inv(int32_t i) {
	return this->this$0->getBaselineFromHeight(i);
}

SpringLayout$Constraints$2::SpringLayout$Constraints$2() {
}

$Class* SpringLayout$Constraints$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/SpringLayout$Constraints;", nullptr, $FINAL | $SYNTHETIC, $field(SpringLayout$Constraints$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/SpringLayout$Constraints;Ljavax/swing/Spring;)V", nullptr, 0, $method(SpringLayout$Constraints$2, init$, void, $SpringLayout$Constraints*, $Spring*)},
		{"inv", "(I)I", nullptr, $PROTECTED, $virtualMethod(SpringLayout$Constraints$2, inv, int32_t, int32_t)},
		{"map", "(I)I", nullptr, $PROTECTED, $virtualMethod(SpringLayout$Constraints$2, map, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.SpringLayout$Constraints",
		"relativeBaselineToHeight",
		"(Ljavax/swing/Spring;)Ljavax/swing/Spring;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SpringLayout$Constraints", "javax.swing.SpringLayout", "Constraints", $PUBLIC | $STATIC},
		{"javax.swing.SpringLayout$Constraints$2", nullptr, nullptr, 0},
		{"javax.swing.Spring$SpringMap", "javax.swing.Spring", "SpringMap", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SpringLayout$Constraints$2",
		"javax.swing.Spring$SpringMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SpringLayout"
	};
	$loadClass(SpringLayout$Constraints$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpringLayout$Constraints$2);
	});
	return class$;
}

$Class* SpringLayout$Constraints$2::class$ = nullptr;

	} // swing
} // javax