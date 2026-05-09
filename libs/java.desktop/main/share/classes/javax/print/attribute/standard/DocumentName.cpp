#include <javax/print/attribute/standard/DocumentName.h>
#include <java/util/Locale.h>
#include <javax/print/attribute/TextSyntax.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $TextSyntax = ::javax::print::attribute::TextSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

int32_t DocumentName::hashCode() {
	return this->$TextSyntax::hashCode();
}

$String* DocumentName::toString() {
	return this->$TextSyntax::toString();
}

$Object* DocumentName::clone() {
	return this->$TextSyntax::clone();
}

void DocumentName::finalize() {
	this->$TextSyntax::finalize();
}

void DocumentName::init$($String* documentName, $Locale* locale) {
	$TextSyntax::init$(documentName, locale);
}

bool DocumentName::equals(Object$* object) {
	return ($TextSyntax::equals(object) && $instanceOf(DocumentName, object));
}

$Class* DocumentName::getCategory() {
	return DocumentName::class$;
}

$String* DocumentName::getName() {
	return "document-name"_s;
}

DocumentName::DocumentName() {
}

$Class* DocumentName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentName, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(DocumentName, init$, void, $String*, $Locale*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DocumentName, equals, bool, Object$*)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(DocumentName, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(DocumentName, getName, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.DocumentName",
		"javax.print.attribute.TextSyntax",
		"javax.print.attribute.DocAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DocumentName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DocumentName));
	});
	return class$;
}

$Class* DocumentName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax