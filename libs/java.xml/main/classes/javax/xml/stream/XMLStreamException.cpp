#include <javax/xml/stream/XMLStreamException.h>

#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Location = ::javax::xml::stream::Location;

namespace javax {
	namespace xml {
		namespace stream {

$FieldInfo _XMLStreamException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLStreamException, serialVersionUID)},
	{"nested", "Ljava/lang/Throwable;", nullptr, $PROTECTED, $field(XMLStreamException, nested)},
	{"location", "Ljavax/xml/stream/Location;", nullptr, $PROTECTED, $field(XMLStreamException, location)},
	{}
};

$MethodInfo _XMLStreamException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/stream/Location;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $String*, $Location*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/stream/Location;)V", nullptr, $PUBLIC, $method(XMLStreamException, init$, void, $String*, $Location*)},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC, $virtualMethod(XMLStreamException, getLocation, $Location*)},
	{"getNestedException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(XMLStreamException, getNestedException, $Throwable*)},
	{}
};

$ClassInfo _XMLStreamException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.stream.XMLStreamException",
	"java.lang.Exception",
	nullptr,
	_XMLStreamException_FieldInfo_,
	_XMLStreamException_MethodInfo_
};

$Object* allocate$XMLStreamException($Class* clazz) {
	return $of($alloc(XMLStreamException));
}

void XMLStreamException::init$() {
	$Exception::init$();
}

void XMLStreamException::init$($String* msg) {
	$Exception::init$(msg);
}

void XMLStreamException::init$($Throwable* th) {
	$Exception::init$(th);
	$set(this, nested, th);
}

void XMLStreamException::init$($String* msg, $Throwable* th) {
	$Exception::init$(msg, th);
	$set(this, nested, th);
}

void XMLStreamException::init$($String* msg, $Location* location, $Throwable* th) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({"ParseError at [row,col]:["_s, $$str($nc(location)->getLineNumber()), ","_s}));
	$var($String, var$1, $$concat(var$2, $$str(location->getColumnNumber())));
	$var($String, var$0, $$concat(var$1, "]\nMessage: "_s));
	$Exception::init$($$concat(var$0, msg));
	$set(this, nested, th);
	$set(this, location, location);
}

void XMLStreamException::init$($String* msg, $Location* location) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({"ParseError at [row,col]:["_s, $$str($nc(location)->getLineNumber()), ","_s}));
	$var($String, var$1, $$concat(var$2, $$str(location->getColumnNumber())));
	$var($String, var$0, $$concat(var$1, "]\nMessage: "_s));
	$Exception::init$($$concat(var$0, msg));
	$set(this, location, location);
}

$Throwable* XMLStreamException::getNestedException() {
	return this->nested;
}

$Location* XMLStreamException::getLocation() {
	return this->location;
}

XMLStreamException::XMLStreamException() {
}

XMLStreamException::XMLStreamException(const XMLStreamException& e) : $Exception(e) {
}

void XMLStreamException::throw$() {
	throw *this;
}

$Class* XMLStreamException::load$($String* name, bool initialize) {
	$loadClass(XMLStreamException, name, initialize, &_XMLStreamException_ClassInfo_, allocate$XMLStreamException);
	return class$;
}

$Class* XMLStreamException::class$ = nullptr;

		} // stream
	} // xml
} // javax