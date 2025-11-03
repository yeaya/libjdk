#ifndef _java_sql_JDBCType_h_
#define _java_sql_JDBCType_h_
//$ class java.sql.JDBCType
//$ extends java.lang.Enum
//$ implements java.sql.SQLType

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/sql/SQLType.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("BIGINT")
#undef BIGINT
#pragma push_macro("BINARY")
#undef BINARY
#pragma push_macro("BIT")
#undef BIT
#pragma push_macro("BLOB")
#undef BLOB
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CLOB")
#undef CLOB
#pragma push_macro("DATALINK")
#undef DATALINK
#pragma push_macro("DATE")
#undef DATE
#pragma push_macro("DECIMAL")
#undef DECIMAL
#pragma push_macro("DISTINCT")
#undef DISTINCT
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("JAVA_OBJECT")
#undef JAVA_OBJECT
#pragma push_macro("LONGNVARCHAR")
#undef LONGNVARCHAR
#pragma push_macro("LONGVARBINARY")
#undef LONGVARBINARY
#pragma push_macro("LONGVARCHAR")
#undef LONGVARCHAR
#pragma push_macro("NCHAR")
#undef NCHAR
#pragma push_macro("NCLOB")
#undef NCLOB
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("NUMERIC")
#undef NUMERIC
#pragma push_macro("NVARCHAR")
#undef NVARCHAR
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("REAL")
#undef REAL
#pragma push_macro("REF")
#undef REF
#pragma push_macro("REF_CURSOR")
#undef REF_CURSOR
#pragma push_macro("ROWID")
#undef ROWID
#pragma push_macro("SMALLINT")
#undef SMALLINT
#pragma push_macro("SQLXML")
#undef SQLXML
#pragma push_macro("STRUCT")
#undef STRUCT
#pragma push_macro("TIME")
#undef TIME
#pragma push_macro("TIMESTAMP")
#undef TIMESTAMP
#pragma push_macro("TIMESTAMP_WITH_TIMEZONE")
#undef TIMESTAMP_WITH_TIMEZONE
#pragma push_macro("TIME_WITH_TIMEZONE")
#undef TIME_WITH_TIMEZONE
#pragma push_macro("TINYINT")
#undef TINYINT
#pragma push_macro("VARBINARY")
#undef VARBINARY
#pragma push_macro("VARCHAR")
#undef VARCHAR

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace java {
	namespace sql {

class $import JDBCType : public ::java::lang::Enum, public ::java::sql::SQLType {
	$class(JDBCType, 0, ::java::lang::Enum, ::java::sql::SQLType)
public:
	JDBCType();
	static $Array<::java::sql::JDBCType>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, ::java::lang::Integer* type);
	virtual $String* getName() override;
	virtual $String* getVendor() override;
	virtual ::java::lang::Integer* getVendorTypeNumber() override;
	virtual $String* toString() override;
	static ::java::sql::JDBCType* valueOf($String* name);
	static ::java::sql::JDBCType* valueOf(int32_t type);
	static $Array<::java::sql::JDBCType>* values();
	static ::java::sql::JDBCType* BIT;
	static ::java::sql::JDBCType* TINYINT;
	static ::java::sql::JDBCType* SMALLINT;
	static ::java::sql::JDBCType* INTEGER;
	static ::java::sql::JDBCType* BIGINT;
	static ::java::sql::JDBCType* FLOAT;
	static ::java::sql::JDBCType* REAL;
	static ::java::sql::JDBCType* DOUBLE;
	static ::java::sql::JDBCType* NUMERIC;
	static ::java::sql::JDBCType* DECIMAL;
	static ::java::sql::JDBCType* CHAR;
	static ::java::sql::JDBCType* VARCHAR;
	static ::java::sql::JDBCType* LONGVARCHAR;
	static ::java::sql::JDBCType* DATE;
	static ::java::sql::JDBCType* TIME;
	static ::java::sql::JDBCType* TIMESTAMP;
	static ::java::sql::JDBCType* BINARY;
	static ::java::sql::JDBCType* VARBINARY;
	static ::java::sql::JDBCType* LONGVARBINARY;
	static ::java::sql::JDBCType* NULL;
	static ::java::sql::JDBCType* OTHER;
	static ::java::sql::JDBCType* JAVA_OBJECT;
	static ::java::sql::JDBCType* DISTINCT;
	static ::java::sql::JDBCType* STRUCT;
	static ::java::sql::JDBCType* ARRAY;
	static ::java::sql::JDBCType* BLOB;
	static ::java::sql::JDBCType* CLOB;
	static ::java::sql::JDBCType* REF;
	static ::java::sql::JDBCType* DATALINK;
	static ::java::sql::JDBCType* BOOLEAN;
	static ::java::sql::JDBCType* ROWID;
	static ::java::sql::JDBCType* NCHAR;
	static ::java::sql::JDBCType* NVARCHAR;
	static ::java::sql::JDBCType* LONGNVARCHAR;
	static ::java::sql::JDBCType* NCLOB;
	static ::java::sql::JDBCType* SQLXML;
	static ::java::sql::JDBCType* REF_CURSOR;
	static ::java::sql::JDBCType* TIME_WITH_TIMEZONE;
	static ::java::sql::JDBCType* TIMESTAMP_WITH_TIMEZONE;
	static $Array<::java::sql::JDBCType>* $VALUES;
	::java::lang::Integer* type = nullptr;
};

	} // sql
} // java

#pragma pop_macro("ARRAY")
#pragma pop_macro("BIGINT")
#pragma pop_macro("BINARY")
#pragma pop_macro("BIT")
#pragma pop_macro("BLOB")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("CHAR")
#pragma pop_macro("CLOB")
#pragma pop_macro("DATALINK")
#pragma pop_macro("DATE")
#pragma pop_macro("DECIMAL")
#pragma pop_macro("DISTINCT")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INTEGER")
#pragma pop_macro("JAVA_OBJECT")
#pragma pop_macro("LONGNVARCHAR")
#pragma pop_macro("LONGVARBINARY")
#pragma pop_macro("LONGVARCHAR")
#pragma pop_macro("NCHAR")
#pragma pop_macro("NCLOB")
#pragma pop_macro("NULL")
#pragma pop_macro("NUMERIC")
#pragma pop_macro("NVARCHAR")
#pragma pop_macro("OTHER")
#pragma pop_macro("REAL")
#pragma pop_macro("REF")
#pragma pop_macro("REF_CURSOR")
#pragma pop_macro("ROWID")
#pragma pop_macro("SMALLINT")
#pragma pop_macro("SQLXML")
#pragma pop_macro("STRUCT")
#pragma pop_macro("TIME")
#pragma pop_macro("TIMESTAMP")
#pragma pop_macro("TIMESTAMP_WITH_TIMEZONE")
#pragma pop_macro("TIME_WITH_TIMEZONE")
#pragma pop_macro("TINYINT")
#pragma pop_macro("VARBINARY")
#pragma pop_macro("VARCHAR")

#endif // _java_sql_JDBCType_h_