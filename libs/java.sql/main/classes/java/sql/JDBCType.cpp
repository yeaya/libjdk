#include <java/sql/JDBCType.h>

#include <java/lang/Enum.h>
#include <java/sql/Types.h>
#include <jcpp.h>

#undef ARRAY
#undef BIGINT
#undef BINARY
#undef BIT
#undef BLOB
#undef BOOLEAN
#undef CHAR
#undef CLOB
#undef DATALINK
#undef DATE
#undef DECIMAL
#undef DISTINCT
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef JAVA_OBJECT
#undef LONGNVARCHAR
#undef LONGVARBINARY
#undef LONGVARCHAR
#undef NCHAR
#undef NCLOB
#undef NULL
#undef NUMERIC
#undef NVARCHAR
#undef OTHER
#undef REAL
#undef REF
#undef REF_CURSOR
#undef ROWID
#undef SMALLINT
#undef SQLXML
#undef STRUCT
#undef TIME
#undef TIMESTAMP
#undef TIMESTAMP_WITH_TIMEZONE
#undef TIME_WITH_TIMEZONE
#undef TINYINT
#undef VARBINARY
#undef VARCHAR

using $JDBCTypeArray = $Array<::java::sql::JDBCType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLType = ::java::sql::SQLType;
using $Types = ::java::sql::Types;

namespace java {
	namespace sql {

$FieldInfo _JDBCType_FieldInfo_[] = {
	{"BIT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, BIT)},
	{"TINYINT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, TINYINT)},
	{"SMALLINT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, SMALLINT)},
	{"INTEGER", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, INTEGER)},
	{"BIGINT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, BIGINT)},
	{"FLOAT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, FLOAT)},
	{"REAL", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, REAL)},
	{"DOUBLE", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, DOUBLE)},
	{"NUMERIC", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, NUMERIC)},
	{"DECIMAL", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, DECIMAL)},
	{"CHAR", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, CHAR)},
	{"VARCHAR", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, VARCHAR)},
	{"LONGVARCHAR", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, LONGVARCHAR)},
	{"DATE", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, DATE)},
	{"TIME", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, TIME)},
	{"TIMESTAMP", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, TIMESTAMP)},
	{"BINARY", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, BINARY)},
	{"VARBINARY", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, VARBINARY)},
	{"LONGVARBINARY", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, LONGVARBINARY)},
	{"NULL", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, NULL)},
	{"OTHER", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, OTHER)},
	{"JAVA_OBJECT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, JAVA_OBJECT)},
	{"DISTINCT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, DISTINCT)},
	{"STRUCT", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, STRUCT)},
	{"ARRAY", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, ARRAY)},
	{"BLOB", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, BLOB)},
	{"CLOB", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, CLOB)},
	{"REF", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, REF)},
	{"DATALINK", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, DATALINK)},
	{"BOOLEAN", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, BOOLEAN)},
	{"ROWID", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, ROWID)},
	{"NCHAR", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, NCHAR)},
	{"NVARCHAR", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, NVARCHAR)},
	{"LONGNVARCHAR", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, LONGNVARCHAR)},
	{"NCLOB", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, NCLOB)},
	{"SQLXML", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, SQLXML)},
	{"REF_CURSOR", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, REF_CURSOR)},
	{"TIME_WITH_TIMEZONE", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, TIME_WITH_TIMEZONE)},
	{"TIMESTAMP_WITH_TIMEZONE", "Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JDBCType, TIMESTAMP_WITH_TIMEZONE)},
	{"$VALUES", "[Ljava/sql/JDBCType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JDBCType, $VALUES)},
	{"type", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(JDBCType, type)},
	{}
};

$MethodInfo _JDBCType_MethodInfo_[] = {
	{"$values", "()[Ljava/sql/JDBCType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JDBCTypeArray*(*)()>(&JDBCType::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/Integer;)V", "(Ljava/lang/Integer;)V", $PRIVATE, $method(static_cast<void(JDBCType::*)($String*,int32_t,$Integer*)>(&JDBCType::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVendorTypeNumber", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JDBCType*(*)($String*)>(&JDBCType::valueOf))},
	{"valueOf", "(I)Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JDBCType*(*)(int32_t)>(&JDBCType::valueOf))},
	{"values", "()[Ljava/sql/JDBCType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JDBCTypeArray*(*)()>(&JDBCType::values))},
	{}
};

$ClassInfo _JDBCType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.sql.JDBCType",
	"java.lang.Enum",
	"java.sql.SQLType",
	_JDBCType_FieldInfo_,
	_JDBCType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/sql/JDBCType;>;Ljava/sql/SQLType;"
};

$Object* allocate$JDBCType($Class* clazz) {
	return $of($alloc(JDBCType));
}

$String* JDBCType::toString() {
	 return this->$Enum::toString();
}

bool JDBCType::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t JDBCType::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* JDBCType::clone() {
	 return this->$Enum::clone();
}

void JDBCType::finalize() {
	this->$Enum::finalize();
}

JDBCType* JDBCType::BIT = nullptr;
JDBCType* JDBCType::TINYINT = nullptr;
JDBCType* JDBCType::SMALLINT = nullptr;
JDBCType* JDBCType::INTEGER = nullptr;
JDBCType* JDBCType::BIGINT = nullptr;
JDBCType* JDBCType::FLOAT = nullptr;
JDBCType* JDBCType::REAL = nullptr;
JDBCType* JDBCType::DOUBLE = nullptr;
JDBCType* JDBCType::NUMERIC = nullptr;
JDBCType* JDBCType::DECIMAL = nullptr;
JDBCType* JDBCType::CHAR = nullptr;
JDBCType* JDBCType::VARCHAR = nullptr;
JDBCType* JDBCType::LONGVARCHAR = nullptr;
JDBCType* JDBCType::DATE = nullptr;
JDBCType* JDBCType::TIME = nullptr;
JDBCType* JDBCType::TIMESTAMP = nullptr;
JDBCType* JDBCType::BINARY = nullptr;
JDBCType* JDBCType::VARBINARY = nullptr;
JDBCType* JDBCType::LONGVARBINARY = nullptr;
JDBCType* JDBCType::NULL = nullptr;
JDBCType* JDBCType::OTHER = nullptr;
JDBCType* JDBCType::JAVA_OBJECT = nullptr;
JDBCType* JDBCType::DISTINCT = nullptr;
JDBCType* JDBCType::STRUCT = nullptr;
JDBCType* JDBCType::ARRAY = nullptr;
JDBCType* JDBCType::BLOB = nullptr;
JDBCType* JDBCType::CLOB = nullptr;
JDBCType* JDBCType::REF = nullptr;
JDBCType* JDBCType::DATALINK = nullptr;
JDBCType* JDBCType::BOOLEAN = nullptr;
JDBCType* JDBCType::ROWID = nullptr;
JDBCType* JDBCType::NCHAR = nullptr;
JDBCType* JDBCType::NVARCHAR = nullptr;
JDBCType* JDBCType::LONGNVARCHAR = nullptr;
JDBCType* JDBCType::NCLOB = nullptr;
JDBCType* JDBCType::SQLXML = nullptr;
JDBCType* JDBCType::REF_CURSOR = nullptr;
JDBCType* JDBCType::TIME_WITH_TIMEZONE = nullptr;
JDBCType* JDBCType::TIMESTAMP_WITH_TIMEZONE = nullptr;
$JDBCTypeArray* JDBCType::$VALUES = nullptr;

$JDBCTypeArray* JDBCType::$values() {
	$init(JDBCType);
	return $new($JDBCTypeArray, {
		JDBCType::BIT,
		JDBCType::TINYINT,
		JDBCType::SMALLINT,
		JDBCType::INTEGER,
		JDBCType::BIGINT,
		JDBCType::FLOAT,
		JDBCType::REAL,
		JDBCType::DOUBLE,
		JDBCType::NUMERIC,
		JDBCType::DECIMAL,
		JDBCType::CHAR,
		JDBCType::VARCHAR,
		JDBCType::LONGVARCHAR,
		JDBCType::DATE,
		JDBCType::TIME,
		JDBCType::TIMESTAMP,
		JDBCType::BINARY,
		JDBCType::VARBINARY,
		JDBCType::LONGVARBINARY,
		JDBCType::NULL,
		JDBCType::OTHER,
		JDBCType::JAVA_OBJECT,
		JDBCType::DISTINCT,
		JDBCType::STRUCT,
		JDBCType::ARRAY,
		JDBCType::BLOB,
		JDBCType::CLOB,
		JDBCType::REF,
		JDBCType::DATALINK,
		JDBCType::BOOLEAN,
		JDBCType::ROWID,
		JDBCType::NCHAR,
		JDBCType::NVARCHAR,
		JDBCType::LONGNVARCHAR,
		JDBCType::NCLOB,
		JDBCType::SQLXML,
		JDBCType::REF_CURSOR,
		JDBCType::TIME_WITH_TIMEZONE,
		JDBCType::TIMESTAMP_WITH_TIMEZONE
	});
}

$JDBCTypeArray* JDBCType::values() {
	$init(JDBCType);
	return $cast($JDBCTypeArray, JDBCType::$VALUES->clone());
}

JDBCType* JDBCType::valueOf($String* name) {
	$init(JDBCType);
	return $cast(JDBCType, $Enum::valueOf(JDBCType::class$, name));
}

void JDBCType::init$($String* $enum$name, int32_t $enum$ordinal, $Integer* type) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, type, type);
}

$String* JDBCType::getName() {
	return name();
}

$String* JDBCType::getVendor() {
	return "java.sql"_s;
}

$Integer* JDBCType::getVendorTypeNumber() {
	return this->type;
}

JDBCType* JDBCType::valueOf(int32_t type) {
	$init(JDBCType);
	$useLocalCurrentObjectStackCache();
	{
		$var($JDBCTypeArray, arr$, $fcast($JDBCTypeArray, JDBCType::class$->getEnumConstants()));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			JDBCType* sqlType = arr$->get(i$);
			{
				if (type == $nc($nc(sqlType)->type)->intValue()) {
					return sqlType;
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Type:"_s, $$str(type), " is not a valid Types.java value."_s}));
}

void clinit$JDBCType($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JDBCType::BIT, $new(JDBCType, "BIT"_s, 0, $($Integer::valueOf($Types::BIT))));
	$assignStatic(JDBCType::TINYINT, $new(JDBCType, "TINYINT"_s, 1, $($Integer::valueOf($Types::TINYINT))));
	$assignStatic(JDBCType::SMALLINT, $new(JDBCType, "SMALLINT"_s, 2, $($Integer::valueOf($Types::SMALLINT))));
	$assignStatic(JDBCType::INTEGER, $new(JDBCType, "INTEGER"_s, 3, $($Integer::valueOf($Types::INTEGER))));
	$assignStatic(JDBCType::BIGINT, $new(JDBCType, "BIGINT"_s, 4, $($Integer::valueOf($Types::BIGINT))));
	$assignStatic(JDBCType::FLOAT, $new(JDBCType, "FLOAT"_s, 5, $($Integer::valueOf($Types::FLOAT))));
	$assignStatic(JDBCType::REAL, $new(JDBCType, "REAL"_s, 6, $($Integer::valueOf($Types::REAL))));
	$assignStatic(JDBCType::DOUBLE, $new(JDBCType, "DOUBLE"_s, 7, $($Integer::valueOf($Types::DOUBLE))));
	$assignStatic(JDBCType::NUMERIC, $new(JDBCType, "NUMERIC"_s, 8, $($Integer::valueOf($Types::NUMERIC))));
	$assignStatic(JDBCType::DECIMAL, $new(JDBCType, "DECIMAL"_s, 9, $($Integer::valueOf($Types::DECIMAL))));
	$assignStatic(JDBCType::CHAR, $new(JDBCType, "CHAR"_s, 10, $($Integer::valueOf($Types::CHAR))));
	$assignStatic(JDBCType::VARCHAR, $new(JDBCType, "VARCHAR"_s, 11, $($Integer::valueOf($Types::VARCHAR))));
	$assignStatic(JDBCType::LONGVARCHAR, $new(JDBCType, "LONGVARCHAR"_s, 12, $($Integer::valueOf($Types::LONGVARCHAR))));
	$assignStatic(JDBCType::DATE, $new(JDBCType, "DATE"_s, 13, $($Integer::valueOf($Types::DATE))));
	$assignStatic(JDBCType::TIME, $new(JDBCType, "TIME"_s, 14, $($Integer::valueOf($Types::TIME))));
	$assignStatic(JDBCType::TIMESTAMP, $new(JDBCType, "TIMESTAMP"_s, 15, $($Integer::valueOf($Types::TIMESTAMP))));
	$assignStatic(JDBCType::BINARY, $new(JDBCType, "BINARY"_s, 16, $($Integer::valueOf($Types::BINARY))));
	$assignStatic(JDBCType::VARBINARY, $new(JDBCType, "VARBINARY"_s, 17, $($Integer::valueOf($Types::VARBINARY))));
	$assignStatic(JDBCType::LONGVARBINARY, $new(JDBCType, "LONGVARBINARY"_s, 18, $($Integer::valueOf($Types::LONGVARBINARY))));
	$assignStatic(JDBCType::NULL, $new(JDBCType, "NULL"_s, 19, $($Integer::valueOf($Types::NULL))));
	$assignStatic(JDBCType::OTHER, $new(JDBCType, "OTHER"_s, 20, $($Integer::valueOf($Types::OTHER))));
	$assignStatic(JDBCType::JAVA_OBJECT, $new(JDBCType, "JAVA_OBJECT"_s, 21, $($Integer::valueOf($Types::JAVA_OBJECT))));
	$assignStatic(JDBCType::DISTINCT, $new(JDBCType, "DISTINCT"_s, 22, $($Integer::valueOf($Types::DISTINCT))));
	$assignStatic(JDBCType::STRUCT, $new(JDBCType, "STRUCT"_s, 23, $($Integer::valueOf($Types::STRUCT))));
	$assignStatic(JDBCType::ARRAY, $new(JDBCType, "ARRAY"_s, 24, $($Integer::valueOf($Types::ARRAY))));
	$assignStatic(JDBCType::BLOB, $new(JDBCType, "BLOB"_s, 25, $($Integer::valueOf($Types::BLOB))));
	$assignStatic(JDBCType::CLOB, $new(JDBCType, "CLOB"_s, 26, $($Integer::valueOf($Types::CLOB))));
	$assignStatic(JDBCType::REF, $new(JDBCType, "REF"_s, 27, $($Integer::valueOf($Types::REF))));
	$assignStatic(JDBCType::DATALINK, $new(JDBCType, "DATALINK"_s, 28, $($Integer::valueOf($Types::DATALINK))));
	$assignStatic(JDBCType::BOOLEAN, $new(JDBCType, "BOOLEAN"_s, 29, $($Integer::valueOf($Types::BOOLEAN))));
	$assignStatic(JDBCType::ROWID, $new(JDBCType, "ROWID"_s, 30, $($Integer::valueOf($Types::ROWID))));
	$assignStatic(JDBCType::NCHAR, $new(JDBCType, "NCHAR"_s, 31, $($Integer::valueOf($Types::NCHAR))));
	$assignStatic(JDBCType::NVARCHAR, $new(JDBCType, "NVARCHAR"_s, 32, $($Integer::valueOf($Types::NVARCHAR))));
	$assignStatic(JDBCType::LONGNVARCHAR, $new(JDBCType, "LONGNVARCHAR"_s, 33, $($Integer::valueOf($Types::LONGNVARCHAR))));
	$assignStatic(JDBCType::NCLOB, $new(JDBCType, "NCLOB"_s, 34, $($Integer::valueOf($Types::NCLOB))));
	$assignStatic(JDBCType::SQLXML, $new(JDBCType, "SQLXML"_s, 35, $($Integer::valueOf($Types::SQLXML))));
	$assignStatic(JDBCType::REF_CURSOR, $new(JDBCType, "REF_CURSOR"_s, 36, $($Integer::valueOf($Types::REF_CURSOR))));
	$assignStatic(JDBCType::TIME_WITH_TIMEZONE, $new(JDBCType, "TIME_WITH_TIMEZONE"_s, 37, $($Integer::valueOf($Types::TIME_WITH_TIMEZONE))));
	$assignStatic(JDBCType::TIMESTAMP_WITH_TIMEZONE, $new(JDBCType, "TIMESTAMP_WITH_TIMEZONE"_s, 38, $($Integer::valueOf($Types::TIMESTAMP_WITH_TIMEZONE))));
	$assignStatic(JDBCType::$VALUES, JDBCType::$values());
}

JDBCType::JDBCType() {
}

$Class* JDBCType::load$($String* name, bool initialize) {
	$loadClass(JDBCType, name, initialize, &_JDBCType_ClassInfo_, clinit$JDBCType, allocate$JDBCType);
	return class$;
}

$Class* JDBCType::class$ = nullptr;

	} // sql
} // java