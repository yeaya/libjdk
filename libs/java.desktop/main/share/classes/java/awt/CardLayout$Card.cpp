#include <java/awt/CardLayout$Card.h>
#include <java/awt/CardLayout.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $CardLayout = ::java::awt::CardLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void CardLayout$Card::init$($CardLayout* this$0, $String* cardName, $Component* cardComponent) {
	$set(this, this$0, this$0);
	$set(this, name, cardName);
	$set(this, comp, cardComponent);
}

CardLayout$Card::CardLayout$Card() {
}

$Class* CardLayout$Card::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/CardLayout;", nullptr, $FINAL | $SYNTHETIC, $field(CardLayout$Card, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CardLayout$Card, serialVersionUID)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CardLayout$Card, name)},
		{"comp", "Ljava/awt/Component;", nullptr, $PUBLIC, $field(CardLayout$Card, comp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/CardLayout;Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(CardLayout$Card, init$, void, $CardLayout*, $String*, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.CardLayout$Card", "java.awt.CardLayout", "Card", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.CardLayout$Card",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.CardLayout"
	};
	$loadClass(CardLayout$Card, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CardLayout$Card);
	});
	return class$;
}

$Class* CardLayout$Card::class$ = nullptr;

	} // awt
} // java