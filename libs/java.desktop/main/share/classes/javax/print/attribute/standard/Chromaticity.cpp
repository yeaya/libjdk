#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef COLOR
#undef MONOCHROME

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $ChromaticityArray = $Array<::javax::print::attribute::standard::Chromaticity>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$Object* Chromaticity::clone() {
	return this->$EnumSyntax::clone();
}

int32_t Chromaticity::hashCode() {
	return this->$EnumSyntax::hashCode();
}

$String* Chromaticity::toString() {
	return this->$EnumSyntax::toString();
}

bool Chromaticity::equals(Object$* arg0) {
	return this->$EnumSyntax::equals(arg0);
}

void Chromaticity::finalize() {
	this->$EnumSyntax::finalize();
}

Chromaticity* Chromaticity::MONOCHROME = nullptr;
Chromaticity* Chromaticity::COLOR = nullptr;
$StringArray* Chromaticity::myStringTable = nullptr;
$ChromaticityArray* Chromaticity::myEnumValueTable = nullptr;

void Chromaticity::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Chromaticity::getStringTable() {
	return Chromaticity::myStringTable;
}

$EnumSyntaxArray* Chromaticity::getEnumValueTable() {
	return $cast($EnumSyntaxArray, Chromaticity::myEnumValueTable);
}

$Class* Chromaticity::getCategory() {
	return Chromaticity::class$;
}

$String* Chromaticity::getName() {
	return "chromaticity"_s;
}

void Chromaticity::clinit$($Class* clazz) {
	$assignStatic(Chromaticity::MONOCHROME, $new(Chromaticity, 0));
	$assignStatic(Chromaticity::COLOR, $new(Chromaticity, 1));
	$assignStatic(Chromaticity::myStringTable, $new($StringArray, {
		"monochrome"_s,
		"color"_s
	}));
	$assignStatic(Chromaticity::myEnumValueTable, $new($ChromaticityArray, {
		Chromaticity::MONOCHROME,
		Chromaticity::COLOR
	}));
}

Chromaticity::Chromaticity() {
}

$Class* Chromaticity::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Chromaticity, serialVersionUID)},
		{"MONOCHROME", "Ljavax/print/attribute/standard/Chromaticity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Chromaticity, MONOCHROME)},
		{"COLOR", "Ljavax/print/attribute/standard/Chromaticity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Chromaticity, COLOR)},
		{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Chromaticity, myStringTable)},
		{"myEnumValueTable", "[Ljavax/print/attribute/standard/Chromaticity;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Chromaticity, myEnumValueTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(Chromaticity, init$, void, int32_t)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(Chromaticity, getCategory, $Class*)},
		{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED, $virtualMethod(Chromaticity, getEnumValueTable, $EnumSyntaxArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Chromaticity, getName, $String*)},
		{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(Chromaticity, getStringTable, $StringArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.Chromaticity",
		"javax.print.attribute.EnumSyntax",
		"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Chromaticity, name, initialize, &classInfo$$, Chromaticity::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Chromaticity));
	});
	return class$;
}

$Class* Chromaticity::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax