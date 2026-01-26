#include <java/sql/PreparedStatement.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/math/BigDecimal.h>
#include <java/net/URL.h>
#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/Clob.h>
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
	{"addBatch", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, addBatch, void), "java.sql.SQLException"},
	{"clearParameters", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, clearParameters, void), "java.sql.SQLException"},
	{"execute", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, execute, bool), "java.sql.SQLException"},
	{"executeLargeUpdate", "()J", nullptr, $PUBLIC, $virtualMethod(PreparedStatement, executeLargeUpdate, int64_t), "java.sql.SQLException"},
	{"executeQuery", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, executeQuery, $ResultSet*), "java.sql.SQLException"},
	{"executeUpdate", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, executeUpdate, int32_t), "java.sql.SQLException"},
	{"getMetaData", "()Ljava/sql/ResultSetMetaData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, getMetaData, $ResultSetMetaData*), "java.sql.SQLException"},
	{"getParameterMetaData", "()Ljava/sql/ParameterMetaData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, getParameterMetaData, $ParameterMetaData*), "java.sql.SQLException"},
	{"setArray", "(ILjava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setArray, void, int32_t, $1Array*), "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setAsciiStream, void, int32_t, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setAsciiStream, void, int32_t, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setAsciiStream, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"setBigDecimal", "(ILjava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBigDecimal, void, int32_t, $BigDecimal*), "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBinaryStream, void, int32_t, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBinaryStream, void, int32_t, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBinaryStream, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"setBlob", "(ILjava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBlob, void, int32_t, $Blob*), "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBlob, void, int32_t, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBlob, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"setBoolean", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBoolean, void, int32_t, bool), "java.sql.SQLException"},
	{"setByte", "(IB)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setByte, void, int32_t, int8_t), "java.sql.SQLException"},
	{"setBytes", "(I[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setBytes, void, int32_t, $bytes*), "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setCharacterStream, void, int32_t, $Reader*, int32_t), "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setCharacterStream, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setCharacterStream, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setClob", "(ILjava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setClob, void, int32_t, $Clob*), "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setClob, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setClob, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setDate, void, int32_t, $Date*), "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setDate, void, int32_t, $Date*, $Calendar*), "java.sql.SQLException"},
	{"setDouble", "(ID)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setDouble, void, int32_t, double), "java.sql.SQLException"},
	{"setFloat", "(IF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setFloat, void, int32_t, float), "java.sql.SQLException"},
	{"setInt", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setInt, void, int32_t, int32_t), "java.sql.SQLException"},
	{"setLong", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setLong, void, int32_t, int64_t), "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNCharacterStream, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNCharacterStream, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setNClob", "(ILjava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNClob, void, int32_t, $NClob*), "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNClob, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNClob, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setNString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNString, void, int32_t, $String*), "java.sql.SQLException"},
	{"setNull", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNull, void, int32_t, int32_t), "java.sql.SQLException"},
	{"setNull", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setNull, void, int32_t, int32_t, $String*), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setObject, void, int32_t, Object$*, int32_t), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setObject, void, int32_t, Object$*), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setObject, void, int32_t, Object$*, int32_t, int32_t), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, $virtualMethod(PreparedStatement, setObject, void, int32_t, Object$*, $SQLType*, int32_t), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, $virtualMethod(PreparedStatement, setObject, void, int32_t, Object$*, $SQLType*), "java.sql.SQLException"},
	{"setRef", "(ILjava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setRef, void, int32_t, $Ref*), "java.sql.SQLException"},
	{"setRowId", "(ILjava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setRowId, void, int32_t, $RowId*), "java.sql.SQLException"},
	{"setSQLXML", "(ILjava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setSQLXML, void, int32_t, $SQLXML*), "java.sql.SQLException"},
	{"setShort", "(IS)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setShort, void, int32_t, int16_t), "java.sql.SQLException"},
	{"setString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setString, void, int32_t, $String*), "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setTime, void, int32_t, $Time*), "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setTime, void, int32_t, $Time*, $Calendar*), "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setTimestamp, void, int32_t, $Timestamp*), "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setTimestamp, void, int32_t, $Timestamp*, $Calendar*), "java.sql.SQLException"},
	{"setURL", "(ILjava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreparedStatement, setURL, void, int32_t, $URL*), "java.sql.SQLException"},
	{"setUnicodeStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(PreparedStatement, setUnicodeStream, void, int32_t, $InputStream*, int32_t), "java.sql.SQLException", nullptr, _PreparedStatement_MethodAnnotations_setUnicodeStream57},
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