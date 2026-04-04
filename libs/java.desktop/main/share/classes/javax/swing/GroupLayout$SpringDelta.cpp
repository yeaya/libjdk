#include <javax/swing/GroupLayout$SpringDelta.h>
#include <java/lang/Comparable.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void GroupLayout$SpringDelta::init$(int32_t index, int32_t delta) {
	this->index = index;
	this->delta = delta;
}

int32_t GroupLayout$SpringDelta::compareTo(GroupLayout$SpringDelta* o) {
	return this->delta - $nc(o)->delta;
}

$String* GroupLayout$SpringDelta::toString() {
	$useLocalObjectStack();
	return $str({$($Comparable::toString()), "[index="_s, $$str(this->index), ", delta="_s, $$str(this->delta), "]"_s});
}

int32_t GroupLayout$SpringDelta::compareTo(Object$* o) {
	return this->compareTo($cast(GroupLayout$SpringDelta, o));
}

GroupLayout$SpringDelta::GroupLayout$SpringDelta() {
}

$Class* GroupLayout$SpringDelta::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PUBLIC | $FINAL, $field(GroupLayout$SpringDelta, index)},
		{"delta", "I", nullptr, $PUBLIC, $field(GroupLayout$SpringDelta, delta)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(GroupLayout$SpringDelta, init$, void, int32_t, int32_t)},
		{"compareTo", "(Ljavax/swing/GroupLayout$SpringDelta;)I", nullptr, $PUBLIC, $method(GroupLayout$SpringDelta, compareTo, int32_t, GroupLayout$SpringDelta*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GroupLayout$SpringDelta, compareTo, int32_t, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GroupLayout$SpringDelta, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.GroupLayout$SpringDelta", "javax.swing.GroupLayout", "SpringDelta", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.GroupLayout$SpringDelta",
		"java.lang.Object",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljavax/swing/GroupLayout$SpringDelta;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.GroupLayout"
	};
	$loadClass(GroupLayout$SpringDelta, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GroupLayout$SpringDelta);
	});
	return class$;
}

$Class* GroupLayout$SpringDelta::class$ = nullptr;

	} // swing
} // javax