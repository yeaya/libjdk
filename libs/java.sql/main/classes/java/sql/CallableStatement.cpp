#include <java/sql/CallableStatement.h>

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
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLType.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <java/util/Calendar.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLType = ::java::sql::SQLType;

namespace java {
	namespace sql {

$NamedAttribute CallableStatement_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _CallableStatement_MethodAnnotations_getBigDecimal2[] = {
	{"Ljava/lang/Deprecated;", CallableStatement_Attribute_var$0},
	{}
};

$MethodInfo _CallableStatement_MethodInfo_[] = {
	{"getArray", "(I)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getArray", "(Ljava/lang/String;)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBigDecimal", "(II)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "java.sql.SQLException", nullptr, _CallableStatement_MethodAnnotations_getBigDecimal2},
	{"getBigDecimal", "(I)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBigDecimal", "(Ljava/lang/String;)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBlob", "(I)Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBlob", "(Ljava/lang/String;)Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBoolean", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getByte", "(I)B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getByte", "(Ljava/lang/String;)B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBytes", "(I)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCharacterStream", "(I)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getClob", "(I)Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getClob", "(Ljava/lang/String;)Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(I)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(ILjava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDouble", "(I)D", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDouble", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFloat", "(I)F", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFloat", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getInt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getInt", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getLong", "(I)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getLong", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNCharacterStream", "(I)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNClob", "(I)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNClob", "(Ljava/lang/String;)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(ILjava/util/Map;)Ljava/lang/Object;", "(ILjava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(ILjava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(ILjava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRef", "(I)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRef", "(Ljava/lang/String;)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRowId", "(I)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRowId", "(Ljava/lang/String;)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSQLXML", "(I)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSQLXML", "(Ljava/lang/String;)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getShort", "(I)S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getShort", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(I)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(ILjava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(I)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(ILjava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getURL", "(I)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getURL", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(III)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(ILjava/sql/SQLType;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(ILjava/sql/SQLType;I)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(ILjava/sql/SQLType;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;Ljava/sql/SQLType;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setByte", "(Ljava/lang/String;B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBytes", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setShort", "(Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setURL", "(Ljava/lang/String;Ljava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"wasNull", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _CallableStatement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.CallableStatement",
	nullptr,
	"java.sql.PreparedStatement",
	nullptr,
	_CallableStatement_MethodInfo_
};

$Object* allocate$CallableStatement($Class* clazz) {
	return $of($alloc(CallableStatement));
}

void CallableStatement::setObject($String* parameterName, Object$* x, $SQLType* targetSqlType, int32_t scaleOrLength) {
	$throwNew($SQLFeatureNotSupportedException, "setObject not implemented"_s);
}

void CallableStatement::setObject($String* parameterName, Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException, "setObject not implemented"_s);
}

void CallableStatement::registerOutParameter(int32_t parameterIndex, $SQLType* sqlType) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter(int32_t parameterIndex, $SQLType* sqlType, int32_t scale) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter(int32_t parameterIndex, $SQLType* sqlType, $String* typeName) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter($String* parameterName, $SQLType* sqlType) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter($String* parameterName, $SQLType* sqlType, int32_t scale) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter($String* parameterName, $SQLType* sqlType, $String* typeName) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

$Class* CallableStatement::load$($String* name, bool initialize) {
	$loadClass(CallableStatement, name, initialize, &_CallableStatement_ClassInfo_, allocate$CallableStatement);
	return class$;
}

$Class* CallableStatement::class$ = nullptr;

	} // sql
} // java