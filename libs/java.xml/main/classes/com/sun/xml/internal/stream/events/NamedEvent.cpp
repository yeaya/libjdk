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

$FieldInfo _NamedEvent_FieldInfo_[] = {
	{"name", "Ljavax/xml/namespace/QName;", nullptr, $PRIVATE, $field(NamedEvent, name)},
	{}
};

$MethodInfo _NamedEvent_MethodInfo_[] = {
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

$ClassInfo _NamedEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.NamedEvent",
	"com.sun.xml.internal.stream.events.DummyEvent",
	nullptr,
	_NamedEvent_FieldInfo_,
	_NamedEvent_MethodInfo_
};

$Object* allocate$NamedEvent($Class* clazz) {
	return $of($alloc(NamedEvent));
}

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
	$useLocalCurrentObjectStackCache();
	if (""_s->equals($($nc(this->name)->getNamespaceURI()))) {
		return $nc(this->name)->getLocalPart();
	}
	if ($nc(this->name)->getPrefix() != nullptr) {
		$var($String, var$2, $$str({"[\'"_s, $($nc(this->name)->getNamespaceURI()), "\']:"_s}));
		$var($String, var$1, $$concat(var$2, $(getPrefix())));
		$var($String, var$0, $$concat(var$1, ":"_s));
		return $concat(var$0, $($nc(this->name)->getLocalPart()));
	} else {
		$var($String, var$3, $$str({"[\'"_s, $($nc(this->name)->getNamespaceURI()), "\']:"_s}));
		return $concat(var$3, $($nc(this->name)->getLocalPart()));
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
	$loadClass(NamedEvent, name, initialize, &_NamedEvent_ClassInfo_, allocate$NamedEvent);
	return class$;
}

$Class* NamedEvent::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com