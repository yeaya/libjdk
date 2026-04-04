#include <javax/swing/table/TableStringConverter.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TableModel = ::javax::swing::table::TableModel;

namespace javax {
	namespace swing {
		namespace table {

void TableStringConverter::init$() {
}

TableStringConverter::TableStringConverter() {
}

$Class* TableStringConverter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(TableStringConverter, init$, void)},
		{"toString", "(Ljavax/swing/table/TableModel;II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableStringConverter, toString, $String*, $TableModel*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.table.TableStringConverter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TableStringConverter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableStringConverter);
	});
	return class$;
}

$Class* TableStringConverter::class$ = nullptr;

		} // table
	} // swing
} // javax