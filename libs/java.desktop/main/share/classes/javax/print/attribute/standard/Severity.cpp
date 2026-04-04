#include <javax/print/attribute/standard/Severity.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef ERROR
#undef REPORT
#undef WARNING

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $SeverityArray = $Array<::javax::print::attribute::standard::Severity>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$Object* Severity::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t Severity::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* Severity::toString() {
	 return this->$EnumSyntax::toString();
}

bool Severity::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void Severity::finalize() {
	this->$EnumSyntax::finalize();
}

Severity* Severity::REPORT = nullptr;
Severity* Severity::WARNING = nullptr;
Severity* Severity::ERROR = nullptr;
$StringArray* Severity::myStringTable = nullptr;
$SeverityArray* Severity::myEnumValueTable = nullptr;

void Severity::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* Severity::getStringTable() {
	return Severity::myStringTable;
}

$EnumSyntaxArray* Severity::getEnumValueTable() {
	return $cast($EnumSyntaxArray, Severity::myEnumValueTable);
}

$Class* Severity::getCategory() {
	return Severity::class$;
}

$String* Severity::getName() {
	return "severity"_s;
}

void Severity::clinit$($Class* clazz) {
	$assignStatic(Severity::REPORT, $new(Severity, 0));
	$assignStatic(Severity::WARNING, $new(Severity, 1));
	$assignStatic(Severity::ERROR, $new(Severity, 2));
	$assignStatic(Severity::myStringTable, $new($StringArray, {
		"report"_s,
		"warning"_s,
		"error"_s
	}));
	$assignStatic(Severity::myEnumValueTable, $new($SeverityArray, {
		Severity::REPORT,
		Severity::WARNING,
		Severity::ERROR
	}));
}

Severity::Severity() {
}

$Class* Severity::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Severity, serialVersionUID)},
		{"REPORT", "Ljavax/print/attribute/standard/Severity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Severity, REPORT)},
		{"WARNING", "Ljavax/print/attribute/standard/Severity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Severity, WARNING)},
		{"ERROR", "Ljavax/print/attribute/standard/Severity;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Severity, ERROR)},
		{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Severity, myStringTable)},
		{"myEnumValueTable", "[Ljavax/print/attribute/standard/Severity;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Severity, myEnumValueTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(Severity, init$, void, int32_t)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(Severity, getCategory, $Class*)},
		{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED, $virtualMethod(Severity, getEnumValueTable, $EnumSyntaxArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Severity, getName, $String*)},
		{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(Severity, getStringTable, $StringArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.Severity",
		"javax.print.attribute.EnumSyntax",
		"javax.print.attribute.Attribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Severity, name, initialize, &classInfo$$, Severity::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Severity));
	});
	return class$;
}

$Class* Severity::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax