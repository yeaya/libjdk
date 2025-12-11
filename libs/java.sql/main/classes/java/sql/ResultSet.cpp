#include <java/sql/ResultSet.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/math/BigDecimal.h>
#include <java/net/URL.h>
#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/Date.h>
#include <java/sql/NClob.h>
#include <java/sql/Ref.h>
#include <java/sql/ResultSetMetaData.h>
#include <java/sql/RowId.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLType.h>
#include <java/sql/SQLWarning.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Statement.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <java/sql/Wrapper.h>
#include <java/util/Calendar.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CLOSE_CURSORS_AT_COMMIT
#undef CONCUR_READ_ONLY
#undef CONCUR_UPDATABLE
#undef FETCH_FORWARD
#undef FETCH_REVERSE
#undef FETCH_UNKNOWN
#undef HOLD_CURSORS_OVER_COMMIT
#undef TYPE_FORWARD_ONLY
#undef TYPE_SCROLL_INSENSITIVE
#undef TYPE_SCROLL_SENSITIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLType = ::java::sql::SQLType;
using $Wrapper = ::java::sql::Wrapper;

namespace java {
	namespace sql {

$NamedAttribute ResultSet_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getBigDecimal12[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$0},
	{}
};

$NamedAttribute ResultSet_Attribute_var$1[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getBigDecimal13[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$1},
	{}
};

$NamedAttribute ResultSet_Attribute_var$2[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getUnicodeStream83[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$2},
	{}
};

$NamedAttribute ResultSet_Attribute_var$3[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getUnicodeStream84[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$3},
	{}
};

$FieldInfo _ResultSet_FieldInfo_[] = {
	{"FETCH_FORWARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, FETCH_FORWARD)},
	{"FETCH_REVERSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, FETCH_REVERSE)},
	{"FETCH_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, FETCH_UNKNOWN)},
	{"TYPE_FORWARD_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, TYPE_FORWARD_ONLY)},
	{"TYPE_SCROLL_INSENSITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, TYPE_SCROLL_INSENSITIVE)},
	{"TYPE_SCROLL_SENSITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, TYPE_SCROLL_SENSITIVE)},
	{"CONCUR_READ_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, CONCUR_READ_ONLY)},
	{"CONCUR_UPDATABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, CONCUR_UPDATABLE)},
	{"HOLD_CURSORS_OVER_COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, HOLD_CURSORS_OVER_COMMIT)},
	{"CLOSE_CURSORS_AT_COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, CLOSE_CURSORS_AT_COMMIT)},
	{}
};

$MethodInfo _ResultSet_MethodInfo_[] = {
	{"absolute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"afterLast", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"beforeFirst", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"cancelRowUpdates", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"clearWarnings", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"deleteRow", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"findColumn", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"first", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getArray", "(I)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getArray", "(Ljava/lang/String;)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getAsciiStream", "(I)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getAsciiStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBigDecimal", "(II)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getBigDecimal12},
	{"getBigDecimal", "(Ljava/lang/String;I)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getBigDecimal13},
	{"getBigDecimal", "(I)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBigDecimal", "(Ljava/lang/String;)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBinaryStream", "(I)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBinaryStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
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
	{"getConcurrency", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCursorName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(I)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(ILjava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDouble", "(I)D", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getDouble", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFetchDirection", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFetchSize", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFloat", "(I)F", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFloat", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getHoldability", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getInt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getInt", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getLong", "(I)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getLong", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMetaData", "()Ljava/sql/ResultSetMetaData;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNCharacterStream", "(I)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNClob", "(I)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNClob", "(Ljava/lang/String;)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getNString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(ILjava/util/Map;)Ljava/lang/Object;", "(ILjava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(ILjava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(ILjava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRef", "(I)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRef", "(Ljava/lang/String;)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRow", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRowId", "(I)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getRowId", "(Ljava/lang/String;)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSQLXML", "(I)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSQLXML", "(Ljava/lang/String;)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getShort", "(I)S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getShort", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getStatement", "()Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(I)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(ILjava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(I)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(ILjava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getURL", "(I)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getURL", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getUnicodeStream", "(I)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getUnicodeStream83},
	{"getUnicodeStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getUnicodeStream84},
	{"getWarnings", "()Ljava/sql/SQLWarning;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"insertRow", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isAfterLast", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isBeforeFirst", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isClosed", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isFirst", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isLast", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"last", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"moveToCurrentRow", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"moveToInsertRow", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"next", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"previous", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"refreshRow", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"relative", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"rowDeleted", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"rowInserted", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"rowUpdated", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFetchDirection", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFetchSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateArray", "(ILjava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateArray", "(Ljava/lang/String;Ljava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateAsciiStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateAsciiStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateAsciiStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBigDecimal", "(ILjava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBinaryStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBinaryStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBinaryStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBlob", "(ILjava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBlob", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBlob", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBoolean", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateByte", "(IB)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateByte", "(Ljava/lang/String;B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBytes", "(I[B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateBytes", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateCharacterStream", "(ILjava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateClob", "(ILjava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateClob", "(Ljava/lang/String;Ljava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateDate", "(ILjava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateDate", "(Ljava/lang/String;Ljava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateDouble", "(ID)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateFloat", "(IF)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateInt", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateLong", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNClob", "(ILjava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNull", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateNull", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"updateRef", "(ILjava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateRef", "(Ljava/lang/String;Ljava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateRow", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateRowId", "(ILjava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateSQLXML", "(ILjava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateShort", "(IS)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateShort", "(Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateTime", "(ILjava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateTime", "(Ljava/lang/String;Ljava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateTimestamp", "(ILjava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"updateTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"wasNull", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _ResultSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ResultSet",
	nullptr,
	"java.sql.Wrapper,java.lang.AutoCloseable",
	_ResultSet_FieldInfo_,
	_ResultSet_MethodInfo_
};

$Object* allocate$ResultSet($Class* clazz) {
	return $of($alloc(ResultSet));
}

int32_t ResultSet::hashCode() {
	 return this->$Wrapper::hashCode();
}

bool ResultSet::equals(Object$* arg0) {
	 return this->$Wrapper::equals(arg0);
}

$Object* ResultSet::clone() {
	 return this->$Wrapper::clone();
}

$String* ResultSet::toString() {
	 return this->$Wrapper::toString();
}

void ResultSet::finalize() {
	this->$Wrapper::finalize();
}

void ResultSet::updateObject(int32_t columnIndex, Object$* x, $SQLType* targetSqlType, int32_t scaleOrLength) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

void ResultSet::updateObject($String* columnLabel, Object$* x, $SQLType* targetSqlType, int32_t scaleOrLength) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

void ResultSet::updateObject(int32_t columnIndex, Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

void ResultSet::updateObject($String* columnLabel, Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

$Class* ResultSet::load$($String* name, bool initialize) {
	$loadClass(ResultSet, name, initialize, &_ResultSet_ClassInfo_, allocate$ResultSet);
	return class$;
}

$Class* ResultSet::class$ = nullptr;

	} // sql
} // java