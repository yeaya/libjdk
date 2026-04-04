#include <javax/swing/GroupLayout$AutoPreferredGapMatch.h>
#include <java/awt/Component.h>
#include <javax/swing/GroupLayout$ComponentSpring.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupLayout$ComponentSpring = ::javax::swing::GroupLayout$ComponentSpring;

namespace javax {
	namespace swing {

void GroupLayout$AutoPreferredGapMatch::init$($GroupLayout$ComponentSpring* source, $GroupLayout$ComponentSpring* target) {
	$set(this, source, source);
	$set(this, target, target);
}

$String* GroupLayout$AutoPreferredGapMatch::toString($GroupLayout$ComponentSpring* spring) {
	return $$nc($nc(spring)->getComponent())->getName();
}

$String* GroupLayout$AutoPreferredGapMatch::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("["_s);
	var$0->append($(toString(this->source)));
	var$0->append("-"_s);
	var$0->append($(toString(this->target)));
	var$0->append("]"_s);
	return $str(var$0);
}

GroupLayout$AutoPreferredGapMatch::GroupLayout$AutoPreferredGapMatch() {
}

$Class* GroupLayout$AutoPreferredGapMatch::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"source", "Ljavax/swing/GroupLayout$ComponentSpring;", nullptr, $PUBLIC | $FINAL, $field(GroupLayout$AutoPreferredGapMatch, source)},
		{"target", "Ljavax/swing/GroupLayout$ComponentSpring;", nullptr, $PUBLIC | $FINAL, $field(GroupLayout$AutoPreferredGapMatch, target)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/GroupLayout$ComponentSpring;Ljavax/swing/GroupLayout$ComponentSpring;)V", nullptr, 0, $method(GroupLayout$AutoPreferredGapMatch, init$, void, $GroupLayout$ComponentSpring*, $GroupLayout$ComponentSpring*)},
		{"toString", "(Ljavax/swing/GroupLayout$ComponentSpring;)Ljava/lang/String;", nullptr, $PRIVATE, $method(GroupLayout$AutoPreferredGapMatch, toString, $String*, $GroupLayout$ComponentSpring*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GroupLayout$AutoPreferredGapMatch, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.GroupLayout$AutoPreferredGapMatch", "javax.swing.GroupLayout", "AutoPreferredGapMatch", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.GroupLayout$AutoPreferredGapMatch",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.GroupLayout"
	};
	$loadClass(GroupLayout$AutoPreferredGapMatch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GroupLayout$AutoPreferredGapMatch);
	});
	return class$;
}

$Class* GroupLayout$AutoPreferredGapMatch::class$ = nullptr;

	} // swing
} // javax