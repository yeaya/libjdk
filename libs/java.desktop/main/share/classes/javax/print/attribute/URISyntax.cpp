#include <javax/print/attribute/URISyntax.h>
#include <java/io/Serializable.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;

namespace javax {
	namespace print {
		namespace attribute {

$Object* URISyntax::clone() {
	 return this->$Serializable::clone();
}

void URISyntax::finalize() {
	this->$Serializable::finalize();
}

void URISyntax::init$($URI* uri) {
	$set(this, uri, verify(uri));
}

$URI* URISyntax::verify($URI* uri) {
	$init(URISyntax);
	if (uri == nullptr) {
		$throwNew($NullPointerException, " uri is null"_s);
	}
	return uri;
}

$URI* URISyntax::getURI() {
	return this->uri;
}

int32_t URISyntax::hashCode() {
	return $nc(this->uri)->hashCode();
}

bool URISyntax::equals(Object$* object) {
	return (object != nullptr && $instanceOf(URISyntax, object) && $nc(this->uri)->equals($cast(URISyntax, object)->uri));
}

$String* URISyntax::toString() {
	return $nc(this->uri)->toString();
}

URISyntax::URISyntax() {
}

$Class* URISyntax::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URISyntax, serialVersionUID)},
		{"uri", "Ljava/net/URI;", nullptr, $PRIVATE, $field(URISyntax, uri)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/net/URI;)V", nullptr, $PROTECTED, $method(URISyntax, init$, void, $URI*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(URISyntax, equals, bool, Object$*)},
		{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(URISyntax, getURI, $URI*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(URISyntax, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URISyntax, toString, $String*)},
		{"verify", "(Ljava/net/URI;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $staticMethod(URISyntax, verify, $URI*, $URI*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.print.attribute.URISyntax",
		"java.lang.Object",
		"java.io.Serializable,java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(URISyntax, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(URISyntax));
	});
	return class$;
}

$Class* URISyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax