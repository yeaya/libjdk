#include <javax/print/attribute/standard/PrinterState.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <jcpp.h>

#undef IDLE
#undef PROCESSING
#undef STOPPED
#undef UNKNOWN

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $PrinterStateArray = $Array<::javax::print::attribute::standard::PrinterState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$Object* PrinterState::clone() {
	 return this->$EnumSyntax::clone();
}

int32_t PrinterState::hashCode() {
	 return this->$EnumSyntax::hashCode();
}

$String* PrinterState::toString() {
	 return this->$EnumSyntax::toString();
}

bool PrinterState::equals(Object$* arg0) {
	 return this->$EnumSyntax::equals(arg0);
}

void PrinterState::finalize() {
	this->$EnumSyntax::finalize();
}

PrinterState* PrinterState::UNKNOWN = nullptr;
PrinterState* PrinterState::IDLE = nullptr;
PrinterState* PrinterState::PROCESSING = nullptr;
PrinterState* PrinterState::STOPPED = nullptr;
$StringArray* PrinterState::myStringTable = nullptr;
$PrinterStateArray* PrinterState::myEnumValueTable = nullptr;

void PrinterState::init$(int32_t value) {
	$EnumSyntax::init$(value);
}

$StringArray* PrinterState::getStringTable() {
	return PrinterState::myStringTable;
}

$EnumSyntaxArray* PrinterState::getEnumValueTable() {
	return $cast($EnumSyntaxArray, PrinterState::myEnumValueTable);
}

$Class* PrinterState::getCategory() {
	return PrinterState::class$;
}

$String* PrinterState::getName() {
	return "printer-state"_s;
}

void PrinterState::clinit$($Class* clazz) {
	$assignStatic(PrinterState::UNKNOWN, $new(PrinterState, 0));
	$assignStatic(PrinterState::IDLE, $new(PrinterState, 3));
	$assignStatic(PrinterState::PROCESSING, $new(PrinterState, 4));
	$assignStatic(PrinterState::STOPPED, $new(PrinterState, 5));
	$assignStatic(PrinterState::myStringTable, $new($StringArray, {
		"unknown"_s,
		nullptr,
		nullptr,
		"idle"_s,
		"processing"_s,
		"stopped"_s
	}));
	$assignStatic(PrinterState::myEnumValueTable, $new($PrinterStateArray, {
		PrinterState::UNKNOWN,
		nullptr,
		nullptr,
		PrinterState::IDLE,
		PrinterState::PROCESSING,
		PrinterState::STOPPED
	}));
}

PrinterState::PrinterState() {
}

$Class* PrinterState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrinterState, serialVersionUID)},
		{"UNKNOWN", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, UNKNOWN)},
		{"IDLE", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, IDLE)},
		{"PROCESSING", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, PROCESSING)},
		{"STOPPED", "Ljavax/print/attribute/standard/PrinterState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrinterState, STOPPED)},
		{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterState, myStringTable)},
		{"myEnumValueTable", "[Ljavax/print/attribute/standard/PrinterState;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrinterState, myEnumValueTable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(I)V", nullptr, $PROTECTED, $method(PrinterState, init$, void, int32_t)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(PrinterState, getCategory, $Class*)},
		{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED, $virtualMethod(PrinterState, getEnumValueTable, $EnumSyntaxArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(PrinterState, getName, $String*)},
		{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(PrinterState, getStringTable, $StringArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.PrinterState",
		"javax.print.attribute.EnumSyntax",
		"javax.print.attribute.PrintServiceAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrinterState, name, initialize, &classInfo$$, PrinterState::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrinterState));
	});
	return class$;
}

$Class* PrinterState::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax