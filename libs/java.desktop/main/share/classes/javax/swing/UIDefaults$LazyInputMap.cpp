#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {

void UIDefaults$LazyInputMap::init$($ObjectArray* bindings) {
	$set(this, bindings, bindings);
}

$Object* UIDefaults$LazyInputMap::createValue($UIDefaults* table) {
	if (this->bindings != nullptr) {
		$var($InputMap, km, $LookAndFeel::makeInputMap(this->bindings));
		return km;
	}
	return nullptr;
}

UIDefaults$LazyInputMap::UIDefaults$LazyInputMap() {
}

$Class* UIDefaults$LazyInputMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bindings", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(UIDefaults$LazyInputMap, bindings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UIDefaults$LazyInputMap, init$, void, $ObjectArray*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UIDefaults$LazyInputMap, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.UIDefaults$LazyInputMap", "javax.swing.UIDefaults", "LazyInputMap", $PUBLIC | $STATIC},
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.UIDefaults$LazyInputMap",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.UIDefaults"
	};
	$loadClass(UIDefaults$LazyInputMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaults$LazyInputMap);
	});
	return class$;
}

$Class* UIDefaults$LazyInputMap::class$ = nullptr;

	} // swing
} // javax