#include <javax/sql/rowset/WebRowSet.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/sql/ResultSet.h>
#include <jcpp.h>

#undef PUBLIC_XML_SCHEMA
#undef SCHEMA_SYSTEM_ID

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResultSet = ::java::sql::ResultSet;

namespace javax {
	namespace sql {
		namespace rowset {

$String* WebRowSet::PUBLIC_XML_SCHEMA = nullptr;
$String* WebRowSet::SCHEMA_SYSTEM_ID = nullptr;

void WebRowSet::clinit$($Class* clazz) {
	$assignStatic(WebRowSet::PUBLIC_XML_SCHEMA, "--//Oracle Corporation//XSD Schema//EN"_s);
	$assignStatic(WebRowSet::SCHEMA_SYSTEM_ID, "http://java.sun.com/xml/ns/jdbc/webrowset.xsd"_s);
}

$Class* WebRowSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PUBLIC_XML_SCHEMA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WebRowSet, PUBLIC_XML_SCHEMA)},
		{"SCHEMA_SYSTEM_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WebRowSet, SCHEMA_SYSTEM_ID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"readXml", "(Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebRowSet, readXml, void, $Reader*), "java.sql.SQLException"},
		{"readXml", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebRowSet, readXml, void, $InputStream*), "java.sql.SQLException,java.io.IOException"},
		{"writeXml", "(Ljava/sql/ResultSet;Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebRowSet, writeXml, void, $ResultSet*, $Writer*), "java.sql.SQLException"},
		{"writeXml", "(Ljava/sql/ResultSet;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebRowSet, writeXml, void, $ResultSet*, $OutputStream*), "java.sql.SQLException,java.io.IOException"},
		{"writeXml", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebRowSet, writeXml, void, $Writer*), "java.sql.SQLException"},
		{"writeXml", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WebRowSet, writeXml, void, $OutputStream*), "java.sql.SQLException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.rowset.WebRowSet",
		nullptr,
		"javax.sql.rowset.CachedRowSet",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WebRowSet, name, initialize, &classInfo$$, WebRowSet::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WebRowSet));
	});
	return class$;
}

$Class* WebRowSet::class$ = nullptr;

		} // rowset
	} // sql
} // javax