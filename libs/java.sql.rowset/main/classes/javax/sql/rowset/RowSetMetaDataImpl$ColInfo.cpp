#include <javax/sql/rowset/RowSetMetaDataImpl$ColInfo.h>
#include <javax/sql/rowset/RowSetMetaDataImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSetMetaDataImpl = ::javax::sql::rowset::RowSetMetaDataImpl;

namespace javax {
	namespace sql {
		namespace rowset {

void RowSetMetaDataImpl$ColInfo::init$($RowSetMetaDataImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, tableName, ""_s);
	this->readOnly = false;
	this->writable = true;
}

RowSetMetaDataImpl$ColInfo::RowSetMetaDataImpl$ColInfo() {
}

$Class* RowSetMetaDataImpl$ColInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/sql/rowset/RowSetMetaDataImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RowSetMetaDataImpl$ColInfo, this$0)},
		{"autoIncrement", "Z", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, autoIncrement)},
		{"caseSensitive", "Z", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, caseSensitive)},
		{"currency", "Z", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, currency)},
		{"nullable", "I", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, nullable)},
		{"signed", "Z", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, signed$)},
		{"searchable", "Z", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, searchable)},
		{"columnDisplaySize", "I", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, columnDisplaySize)},
		{"columnLabel", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, columnLabel)},
		{"columnName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, columnName)},
		{"schemaName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, schemaName)},
		{"colPrecision", "I", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, colPrecision)},
		{"colScale", "I", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, colScale)},
		{"tableName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, tableName)},
		{"catName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, catName)},
		{"colType", "I", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, colType)},
		{"colTypeName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, colTypeName)},
		{"readOnly", "Z", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, readOnly)},
		{"writable", "Z", nullptr, $PUBLIC, $field(RowSetMetaDataImpl$ColInfo, writable)},
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RowSetMetaDataImpl$ColInfo, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sql/rowset/RowSetMetaDataImpl;)V", nullptr, $PRIVATE, $method(RowSetMetaDataImpl$ColInfo, init$, void, $RowSetMetaDataImpl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sql.rowset.RowSetMetaDataImpl$ColInfo", "javax.sql.rowset.RowSetMetaDataImpl", "ColInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sql.rowset.RowSetMetaDataImpl$ColInfo",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sql.rowset.RowSetMetaDataImpl"
	};
	$loadClass(RowSetMetaDataImpl$ColInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetMetaDataImpl$ColInfo);
	});
	return class$;
}

$Class* RowSetMetaDataImpl$ColInfo::class$ = nullptr;

		} // rowset
	} // sql
} // javax