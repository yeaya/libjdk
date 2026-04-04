#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

#undef CHANGE
#undef INSERT
#undef REMOVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

DocumentEvent$EventType* DocumentEvent$EventType::INSERT = nullptr;
DocumentEvent$EventType* DocumentEvent$EventType::REMOVE = nullptr;
DocumentEvent$EventType* DocumentEvent$EventType::CHANGE = nullptr;

void DocumentEvent$EventType::init$($String* s) {
	$set(this, typeString, s);
}

$String* DocumentEvent$EventType::toString() {
	return this->typeString;
}

void DocumentEvent$EventType::clinit$($Class* clazz) {
	$assignStatic(DocumentEvent$EventType::INSERT, $new(DocumentEvent$EventType, "INSERT"_s));
	$assignStatic(DocumentEvent$EventType::REMOVE, $new(DocumentEvent$EventType, "REMOVE"_s));
	$assignStatic(DocumentEvent$EventType::CHANGE, $new(DocumentEvent$EventType, "CHANGE"_s));
}

DocumentEvent$EventType::DocumentEvent$EventType() {
}

$Class* DocumentEvent$EventType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSERT", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentEvent$EventType, INSERT)},
		{"REMOVE", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentEvent$EventType, REMOVE)},
		{"CHANGE", "Ljavax/swing/event/DocumentEvent$EventType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocumentEvent$EventType, CHANGE)},
		{"typeString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DocumentEvent$EventType, typeString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DocumentEvent$EventType, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DocumentEvent$EventType, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.event.DocumentEvent$EventType", "javax.swing.event.DocumentEvent", "EventType", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.event.DocumentEvent$EventType",
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
		"javax.swing.event.DocumentEvent"
	};
	$loadClass(DocumentEvent$EventType, name, initialize, &classInfo$$, DocumentEvent$EventType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentEvent$EventType);
	});
	return class$;
}

$Class* DocumentEvent$EventType::class$ = nullptr;

		} // event
	} // swing
} // javax