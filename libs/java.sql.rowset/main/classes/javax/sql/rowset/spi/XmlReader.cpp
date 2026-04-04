#include <javax/sql/rowset/spi/XmlReader.h>
#include <java/io/Reader.h>
#include <javax/sql/rowset/WebRowSet.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WebRowSet = ::javax::sql::rowset::WebRowSet;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

$Class* XmlReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readXML", "(Ljavax/sql/rowset/WebRowSet;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XmlReader, readXML, void, $WebRowSet*, $Reader*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.rowset.spi.XmlReader",
		nullptr,
		"javax.sql.RowSetReader",
		nullptr,
		methodInfos$$
	};
	$loadClass(XmlReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XmlReader);
	});
	return class$;
}

$Class* XmlReader::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax