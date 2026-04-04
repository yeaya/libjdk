#include <javax/sql/rowset/spi/XmlWriter.h>
#include <java/io/Writer.h>
#include <javax/sql/rowset/WebRowSet.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebRowSet = ::javax::sql::rowset::WebRowSet;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

$Class* XmlWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"writeXML", "(Ljavax/sql/rowset/WebRowSet;Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XmlWriter, writeXML, void, $WebRowSet*, $Writer*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.rowset.spi.XmlWriter",
		nullptr,
		"javax.sql.RowSetWriter",
		nullptr,
		methodInfos$$
	};
	$loadClass(XmlWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XmlWriter);
	});
	return class$;
}

$Class* XmlWriter::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax