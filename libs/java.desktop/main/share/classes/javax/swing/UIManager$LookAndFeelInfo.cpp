#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void UIManager$LookAndFeelInfo::init$($String* name, $String* className) {
	$set(this, name, name);
	$set(this, className, className);
}

$String* UIManager$LookAndFeelInfo::getName() {
	return this->name;
}

$String* UIManager$LookAndFeelInfo::getClassName() {
	return this->className;
}

$String* UIManager$LookAndFeelInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("["_s);
	var$0->append($(getName()));
	var$0->append(" "_s);
	var$0->append($(getClassName()));
	var$0->append("]"_s);
	return $str(var$0);
}

UIManager$LookAndFeelInfo::UIManager$LookAndFeelInfo() {
}

$Class* UIManager$LookAndFeelInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UIManager$LookAndFeelInfo, name)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UIManager$LookAndFeelInfo, className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UIManager$LookAndFeelInfo, init$, void, $String*, $String*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UIManager$LookAndFeelInfo, getClassName, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UIManager$LookAndFeelInfo, getName, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UIManager$LookAndFeelInfo, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.UIManager$LookAndFeelInfo", "javax.swing.UIManager", "LookAndFeelInfo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.UIManager$LookAndFeelInfo",
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
		"javax.swing.UIManager"
	};
	$loadClass(UIManager$LookAndFeelInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIManager$LookAndFeelInfo);
	});
	return class$;
}

$Class* UIManager$LookAndFeelInfo::class$ = nullptr;

	} // swing
} // javax