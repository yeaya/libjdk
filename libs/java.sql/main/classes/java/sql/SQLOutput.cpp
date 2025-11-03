#include <java/sql/SQLOutput.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/math/BigDecimal.h>
#include <java/net/URL.h>
#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/Date.h>
#include <java/sql/NClob.h>
#include <java/sql/Ref.h>
#include <java/sql/RowId.h>
#include <java/sql/SQLData.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLType.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Struct.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $URL = ::java::net::URL;
using $1Array = ::java::sql::Array;
using $Blob = ::java::sql::Blob;
using $Clob = ::java::sql::Clob;
using $Date = ::java::sql::Date;
using $NClob = ::java::sql::NClob;
using $Ref = ::java::sql::Ref;
using $RowId = ::java::sql::RowId;
using $SQLData = ::java::sql::SQLData;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLType = ::java::sql::SQLType;
using $SQLXML = ::java::sql::SQLXML;
using $Struct = ::java::sql::Struct;
using $Time = ::java::sql::Time;
using $Timestamp = ::java::sql::Timestamp;

namespace java {
	namespace sql {

$MethodInfo _SQLOutput_MethodInfo_[] = {
	{"writeArray", "(Ljava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeAsciiStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeBigDecimal", "(Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeBinaryStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeBlob", "(Ljava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeBoolean", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeByte", "(B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeBytes", "([B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeClob", "(Ljava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeDate", "(Ljava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeDouble", "(D)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeFloat", "(F)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeInt", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeLong", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeNClob", "(Ljava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeNString", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeObject", "(Ljava/sql/SQLData;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeObject", "(Ljava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"writeRef", "(Ljava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeRowId", "(Ljava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeSQLXML", "(Ljava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeShort", "(S)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeString", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeStruct", "(Ljava/sql/Struct;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeTime", "(Ljava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeTimestamp", "(Ljava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"writeURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _SQLOutput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.SQLOutput",
	nullptr,
	nullptr,
	nullptr,
	_SQLOutput_MethodInfo_
};

$Object* allocate$SQLOutput($Class* clazz) {
	return $of($alloc(SQLOutput));
}

void SQLOutput::writeObject(Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException);
}

$Class* SQLOutput::load$($String* name, bool initialize) {
	$loadClass(SQLOutput, name, initialize, &_SQLOutput_ClassInfo_, allocate$SQLOutput);
	return class$;
}

$Class* SQLOutput::class$ = nullptr;

	} // sql
} // java