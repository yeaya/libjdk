#include <java/sql/SQLInput.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/math/BigDecimal.h>
#include <java/net/URL.h>
#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/Clob.h>
#include <java/sql/Date.h>
#include <java/sql/NClob.h>
#include <java/sql/Ref.h>
#include <java/sql/RowId.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLXML.h>
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
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLXML = ::java::sql::SQLXML;
using $Time = ::java::sql::Time;
using $Timestamp = ::java::sql::Timestamp;

namespace java {
	namespace sql {

$MethodInfo _SQLInput_MethodInfo_[] = {
	{"readArray", "()Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readArray, $1Array*), "java.sql.SQLException"},
	{"readAsciiStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readAsciiStream, $InputStream*), "java.sql.SQLException"},
	{"readBigDecimal", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readBigDecimal, $BigDecimal*), "java.sql.SQLException"},
	{"readBinaryStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readBinaryStream, $InputStream*), "java.sql.SQLException"},
	{"readBlob", "()Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readBlob, $Blob*), "java.sql.SQLException"},
	{"readBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readBoolean, bool), "java.sql.SQLException"},
	{"readByte", "()B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readByte, int8_t), "java.sql.SQLException"},
	{"readBytes", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readBytes, $bytes*), "java.sql.SQLException"},
	{"readCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readCharacterStream, $Reader*), "java.sql.SQLException"},
	{"readClob", "()Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readClob, $Clob*), "java.sql.SQLException"},
	{"readDate", "()Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readDate, $Date*), "java.sql.SQLException"},
	{"readDouble", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readDouble, double), "java.sql.SQLException"},
	{"readFloat", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readFloat, float), "java.sql.SQLException"},
	{"readInt", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readInt, int32_t), "java.sql.SQLException"},
	{"readLong", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readLong, int64_t), "java.sql.SQLException"},
	{"readNClob", "()Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readNClob, $NClob*), "java.sql.SQLException"},
	{"readNString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readNString, $String*), "java.sql.SQLException"},
	{"readObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readObject, $Object*), "java.sql.SQLException"},
	{"readObject", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(SQLInput, readObject, $Object*, $Class*), "java.sql.SQLException"},
	{"readRef", "()Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readRef, $Ref*), "java.sql.SQLException"},
	{"readRowId", "()Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readRowId, $RowId*), "java.sql.SQLException"},
	{"readSQLXML", "()Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readSQLXML, $SQLXML*), "java.sql.SQLException"},
	{"readShort", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readShort, int16_t), "java.sql.SQLException"},
	{"readString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readString, $String*), "java.sql.SQLException"},
	{"readTime", "()Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readTime, $Time*), "java.sql.SQLException"},
	{"readTimestamp", "()Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readTimestamp, $Timestamp*), "java.sql.SQLException"},
	{"readURL", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, readURL, $URL*), "java.sql.SQLException"},
	{"wasNull", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLInput, wasNull, bool), "java.sql.SQLException"},
	{}
};

$ClassInfo _SQLInput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.SQLInput",
	nullptr,
	nullptr,
	nullptr,
	_SQLInput_MethodInfo_
};

$Object* allocate$SQLInput($Class* clazz) {
	return $of($alloc(SQLInput));
}

$Object* SQLInput::readObject($Class* type) {
	$throwNew($SQLFeatureNotSupportedException);
	$shouldNotReachHere();
}

$Class* SQLInput::load$($String* name, bool initialize) {
	$loadClass(SQLInput, name, initialize, &_SQLInput_ClassInfo_, allocate$SQLInput);
	return class$;
}

$Class* SQLInput::class$ = nullptr;

	} // sql
} // java