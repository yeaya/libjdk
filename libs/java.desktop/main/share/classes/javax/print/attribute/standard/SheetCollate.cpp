#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef COLLATED
#undef UNCOLLATED

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $SheetCollateArray = $Array<::javax::print::attribute::standard::SheetCollate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$Object* SheetCollate::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t SheetCollate::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* SheetCollate::toString() {
	 return this->$EnumSyntax::toString();
}

bool SheetCollate::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void SheetCollate::finalize() {
	this->$EnumSyntax::finalize();
}

SheetCollate* SheetCollate::UNCOLLATED = nullptr;
SheetCollate* SheetCollate::COLLATED = nullptr;
$StringArray* SheetCollate::myStringTable = nullptr;
$SheetCollateArray* SheetCollate::myEnumValueTable = nullptr;

void SheetCollate::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* SheetCollate::getStringTable() {
	return SheetCollate::myStringTable;
}

$EnumSyntaxArray* SheetCollate::getEnumValueTable() {
	return $cast($EnumSyntaxArray, SheetCollate::myEnumValueTable);
}

$Class* SheetCollate::getCategory() {
	return SheetCollate::class$;
}

$String* SheetCollate::getName() {
	return "sheet-collate"_s;
}

void SheetCollate::clinit$($Class* clazz) {
	$assignStatic(SheetCollate::UNCOLLATED, $new(SheetCollate, 0));
	$assignStatic(SheetCollate::COLLATED, $new(SheetCollate, 1));
	$assignStatic(SheetCollate::myStringTable, $new($StringArray, {
		"uncollated"_s,
		"collated"_s
	}));
	$assignStatic(SheetCollate::myEnumValueTable, $new($SheetCollateArray, {
		SheetCollate::UNCOLLATED,
		SheetCollate::COLLATED
	}));
}

SheetCollate::SheetCollate() {
}

$Class* SheetCollate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SheetCollate, serialVersionUID)},
		{"UNCOLLATED", "Ljavax/print/attribute/standard/SheetCollate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SheetCollate, UNCOLLATED)},
		{"COLLATED", "Ljavax/print/attribute/standard/SheetCollate;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SheetCollate, COLLATED)},
		{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SheetCollate, myStringTable)},
		{"myEnumValueTable", "[Ljavax/print/attribute/standard/SheetCollate;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SheetCollate, myEnumValueTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(SheetCollate, init$, void, int32_t)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(SheetCollate, getCategory, $Class*)},
		{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED, $virtualMethod(SheetCollate, getEnumValueTable, $EnumSyntaxArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SheetCollate, getName, $String*)},
		{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SheetCollate, getStringTable, $StringArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.SheetCollate",
		"javax.print.attribute.EnumSyntax",
		"javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SheetCollate, name, initialize, &classInfo$$, SheetCollate::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SheetCollate));
	});
	return class$;
}

$Class* SheetCollate::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax