#include <java/sql/PreparedStatement.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/math/BigDecimal.h>
#include <java/net/URL.h>
#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/Date.h>
#include <java/sql/NClob.h>
#include <java/sql/ParameterMetaData.h>
#include <java/sql/Ref.h>
#include <java/sql/ResultSet.h>
#include <java/sql/ResultSetMetaData.h>
#include <java/sql/RowId.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLType.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <java/util/Calendar.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BigDecimal = ::java::math::BigDecimal;
using $URL = ::java::net::URL;
using $1Array = ::java::sql::Array;
using $Blob = ::java::sql::Blob;
using $Clob = ::java::sql::Clob;
using $Date = ::java::sql::Date;
using $NClob = ::java::sql::NClob;
using $ParameterMetaData = ::java::sql::ParameterMetaData;
using $Ref = ::java::sql::Ref;
using $ResultSet = ::java::sql::ResultSet;
using $ResultSetMetaData = ::java::sql::ResultSetMetaData;
using $RowId = ::java::sql::RowId;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLType = ::java::sql::SQLType;
using $SQLXML = ::java::sql::SQLXML;
using $Statement = ::java::sql::Statement;
using $Time = ::java::sql::Time;
using $Timestamp = ::java::sql::Timestamp;
using $Calendar = ::java::util::Calendar;

namespace java {
	namespace sql {

$NamedAttribute PreparedStatement_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _PreparedStatement_MethodAnnotations_setUnicodeStream57[] = {
	{"Ljava/lang/Deprecated;", PreparedStatement_Attribute_var$0},
	{}
};

$MethodInfo _PreparedStatement_MethodInfo_[] = {
	{"addBatch", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"clearParameters", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"execute", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeLargeUpdate", "()J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"executeQuery", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeUpdate", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMetaData", "()Ljava/sql/ResultSetMetaData;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getParameterMetaData", "()Ljava/sql/ParameterMetaData;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setArray", "(ILjava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBigDecimal", "(ILjava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(ILjava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBoolean", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setByte", "(IB)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBytes", "(I[B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(ILjava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDouble", "(ID)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFloat", "(IF)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setInt", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLong", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(ILjava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setRef", "(ILjava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setRowId", "(ILjava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSQLXML", "(ILjava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setShort", "(IS)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setURL", "(ILjava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setUnicodeStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "java.sql.SQLException", nullptr, _PreparedStatement_MethodAnnotations_setUnicodeStream57},
	{}
};

$ClassInfo _PreparedStatement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.PreparedStatement",
	nullptr,
	"java.sql.Statement",
	nullptr,
	_PreparedStatement_MethodInfo_
};

$Object* allocate$PreparedStatement($Class* clazz) {
	return $of($alloc(PreparedStatement));
}

void PreparedStatement::setObject(int32_t parameterIndex, Object$* x, $SQLType* targetSqlType, int32_t scaleOrLength) {
	$throwNew($SQLFeatureNotSupportedException, "setObject not implemented"_s);
}

void PreparedStatement::setObject(int32_t parameterIndex, Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException, "setObject not implemented"_s);
}

int64_t PreparedStatement::executeLargeUpdate() {
	$throwNew($UnsupportedOperationException, "executeLargeUpdate not implemented"_s);
	$shouldNotReachHere();
}

$Class* PreparedStatement::load$($String* name, bool initialize) {
	$loadClass(PreparedStatement, name, initialize, &_PreparedStatement_ClassInfo_, allocate$PreparedStatement);
	return class$;
}

$Class* PreparedStatement::class$ = nullptr;

	} // sql
} // java