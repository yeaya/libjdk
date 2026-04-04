#include <com/sun/xml/internal/stream/events/NamedEvent.h>
#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <java/io/Writer.h>
#include <javax/xml/namespace/QName.h>
#include <jcpp.h>

using $DummyEvent = ::com::sun::xml::internal::stream::events::DummyEvent;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $QName = ::javax::xml::namespace$::QName;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

void NamedEvent::init$() {
	$DummyEvent::init$();
}

void NamedEvent::init$($QName* qname) {
	$DummyEvent::init$();
	$set(this, name, qname);
}

void NamedEvent::init$($String* prefix, $String* uri, $String* localpart) {
	$DummyEvent::init$();
	$set(this, name, $new($QName, uri, localpart, prefix));
}

$String* NamedEvent::getPrefix() {
	return $nc(this->name)->getPrefix();
}

$QName* NamedEvent::getName() {
	return this->name;
}

void NamedEvent::setName($QName* qname) {
	$set(this, name, qname);
}

$String* NamedEvent::nameAsString() {
	$useLocalObjectStack();
	if (""_s->equals($($nc(this->name)->getNamespaceURI()))) {
		return $nc(this->name)->getLocalPart();
	}
	if ($nc(this->name)->getPrefix() != nullptr) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("[\'"_s);
		var$0->append($($nc(this->name)->getNamespaceURI()));
		var$0->append("\']:"_s);
		var$0->append($(getPrefix()));
		var$0->append(":"_s);
		var$0->append($(this->name->getLocalPart()));
		return $str(var$0);
	} else {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("[\'"_s);
		var$1->append($($nc(this->name)->getNamespaceURI()));
		var$1->append("\']:"_s);
		var$1->append($(this->name->getLocalPart()));
		return $str(var$1);
	}
}

$String* NamedEvent::getNamespace() {
	return $nc(this->name)->getNamespaceURI();
}

void NamedEvent::writeAsEncodedUnicodeEx($Writer* writer) {
	$nc(writer)->write($(nameAsString()));
}

NamedEvent::NamedEvent() {
}

$Class* NamedEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljavax/xml/namespace/QName;", nullptr, $PRIVATE, $field(NamedEvent, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NamedEvent, init$, void)},
		{"<init>", "(Ljavax/xml/namespace/QName;)V", nullptr, $PUBLIC, $method(NamedEvent, init$, void, $QName*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NamedEvent, init$, void, $String*, $String*, $String*)},
		{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC, $virtualMethod(NamedEvent, getName, $QName*)},
		{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamedEvent, getNamespace, $String*)},
		{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamedEvent, getPrefix, $String*)},
		{"nameAsString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamedEvent, nameAsString, $String*)},
		{"setName", "(Ljavax/xml/namespace/QName;)V", nullptr, $PUBLIC, $virtualMethod(NamedEvent, setName, void, $QName*)},
		{"writeAsEncodedUnicodeEx", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $virtualMethod(NamedEvent, writeAsEncodedUnicodeEx, void, $Writer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.xml.internal.stream.events.NamedEvent",
		"com.sun.xml.internal.stream.events.DummyEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NamedEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedEvent);
	});
	return class$;
}

$Class* NamedEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com