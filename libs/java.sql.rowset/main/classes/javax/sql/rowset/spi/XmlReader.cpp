#include <javax/sql/rowset/spi/XmlReader.h>

#include <java/io/Reader.h>
#include <javax/sql/rowset/WebRowSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

$MethodInfo _XmlReader_MethodInfo_[] = {
	{"readXML", "(Ljavax/sql/rowset/WebRowSet;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _XmlReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.rowset.spi.XmlReader",
	nullptr,
	"javax.sql.RowSetReader",
	nullptr,
	_XmlReader_MethodInfo_
};

$Object* allocate$XmlReader($Class* clazz) {
	return $of($alloc(XmlReader));
}

$Class* XmlReader::load$($String* name, bool initialize) {
	$loadClass(XmlReader, name, initialize, &_XmlReader_ClassInfo_, allocate$XmlReader);
	return class$;
}

$Class* XmlReader::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax