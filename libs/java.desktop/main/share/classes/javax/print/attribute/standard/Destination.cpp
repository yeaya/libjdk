#include <javax/print/attribute/standard/Destination.h>
#include <java/net/URI.h>
#include <javax/print/attribute/URISyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntax = ::javax::print::attribute::URISyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

int32_t Destination::hashCode() {
	return this->$URISyntax::hashCode();
}

$String* Destination::toString() {
	return this->$URISyntax::toString();
}

$Object* Destination::clone() {
	return this->$URISyntax::clone();
}

void Destination::finalize() {
	this->$URISyntax::finalize();
}

void Destination::init$($URI* uri) {
	$URISyntax::init$(uri);
}

bool Destination::equals(Object$* object) {
	return ($URISyntax::equals(object) && $instanceOf(Destination, object));
}

$Class* Destination::getCategory() {
	return Destination::class$;
}

$String* Destination::getName() {
	return "spool-data-destination"_s;
}

Destination::Destination() {
}

$Class* Destination::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Destination, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(Destination, init$, void, $URI*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Destination, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(Destination, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Destination, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.Destination",
		"javax.print.attribute.URISyntax",
		"javax.print.attribute.PrintJobAttribute,javax.print.attribute.PrintRequestAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Destination, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Destination));
	});
	return class$;
}

$Class* Destination::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax