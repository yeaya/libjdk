#include <javax/sql/rowset/CachedRowSet.h>

#include <java/sql/Connection.h>
#include <java/sql/ResultSet.h>
#include <java/sql/Savepoint.h>
#include <java/util/Collection.h>
#include <javax/sql/RowSet.h>
#include <javax/sql/RowSetEvent.h>
#include <javax/sql/RowSetMetaData.h>
#include <javax/sql/rowset/RowSetWarning.h>
#include <javax/sql/rowset/spi/SyncProvider.h>
#include <jcpp.h>

#undef COMMIT_ON_ACCEPT_CHANGES

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::java::sql::Connection;
using $ResultSet = ::java::sql::ResultSet;
using $Savepoint = ::java::sql::Savepoint;
using $Collection = ::java::util::Collection;
using $RowSet = ::javax::sql::RowSet;
using $RowSetEvent = ::javax::sql::RowSetEvent;
using $RowSetMetaData = ::javax::sql::RowSetMetaData;
using $RowSetWarning = ::javax::sql::rowset::RowSetWarning;
using $SyncProvider = ::javax::sql::rowset::spi::SyncProvider;

namespace javax {
	namespace sql {
		namespace rowset {

$CompoundAttribute _CachedRowSet_FieldAnnotations_COMMIT_ON_ACCEPT_CHANGES[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CachedRowSet_FieldInfo_[] = {
	{"COMMIT_ON_ACCEPT_CHANGES", "Z", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(CachedRowSet, COMMIT_ON_ACCEPT_CHANGES), _CachedRowSet_FieldAnnotations_COMMIT_ON_ACCEPT_CHANGES},
	{}
};

$MethodInfo _CachedRowSet_MethodInfo_[] = {
	{"acceptChanges", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, acceptChanges, void), "javax.sql.rowset.spi.SyncProviderException"},
	{"acceptChanges", "(Ljava/sql/Connection;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, acceptChanges, void, $Connection*), "javax.sql.rowset.spi.SyncProviderException"},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"columnUpdated", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, columnUpdated, bool, int32_t), "java.sql.SQLException"},
	{"columnUpdated", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, columnUpdated, bool, $String*), "java.sql.SQLException"},
	{"commit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, commit, void), "java.sql.SQLException"},
	{"createCopy", "()Ljavax/sql/rowset/CachedRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, createCopy, CachedRowSet*), "java.sql.SQLException"},
	{"createCopyNoConstraints", "()Ljavax/sql/rowset/CachedRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, createCopyNoConstraints, CachedRowSet*), "java.sql.SQLException"},
	{"createCopySchema", "()Ljavax/sql/rowset/CachedRowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, createCopySchema, CachedRowSet*), "java.sql.SQLException"},
	{"createShared", "()Ljavax/sql/RowSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, createShared, $RowSet*), "java.sql.SQLException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"execute", "(Ljava/sql/Connection;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, execute, void, $Connection*), "java.sql.SQLException"},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getKeyColumns", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getKeyColumns, $ints*), "java.sql.SQLException"},
	{"getOriginal", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getOriginal, $ResultSet*), "java.sql.SQLException"},
	{"getOriginalRow", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getOriginalRow, $ResultSet*), "java.sql.SQLException"},
	{"getPageSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getPageSize, int32_t)},
	{"getRowSetWarnings", "()Ljavax/sql/rowset/RowSetWarning;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getRowSetWarnings, $RowSetWarning*), "java.sql.SQLException"},
	{"getShowDeleted", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getShowDeleted, bool), "java.sql.SQLException"},
	{"getSyncProvider", "()Ljavax/sql/rowset/spi/SyncProvider;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getSyncProvider, $SyncProvider*), "java.sql.SQLException"},
	{"getTableName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, getTableName, $String*), "java.sql.SQLException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"nextPage", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, nextPage, bool), "java.sql.SQLException"},
	{"populate", "(Ljava/sql/ResultSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, populate, void, $ResultSet*), "java.sql.SQLException"},
	{"populate", "(Ljava/sql/ResultSet;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, populate, void, $ResultSet*, int32_t), "java.sql.SQLException"},
	{"previousPage", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, previousPage, bool), "java.sql.SQLException"},
	{"release", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, release, void), "java.sql.SQLException"},
	{"restoreOriginal", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, restoreOriginal, void), "java.sql.SQLException"},
	{"rollback", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, rollback, void), "java.sql.SQLException"},
	{"rollback", "(Ljava/sql/Savepoint;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, rollback, void, $Savepoint*), "java.sql.SQLException"},
	{"rowSetPopulated", "(Ljavax/sql/RowSetEvent;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, rowSetPopulated, void, $RowSetEvent*, int32_t), "java.sql.SQLException"},
	{"setKeyColumns", "([I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, setKeyColumns, void, $ints*), "java.sql.SQLException"},
	{"setMetaData", "(Ljavax/sql/RowSetMetaData;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, setMetaData, void, $RowSetMetaData*), "java.sql.SQLException"},
	{"setOriginalRow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, setOriginalRow, void), "java.sql.SQLException"},
	{"setPageSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, setPageSize, void, int32_t), "java.sql.SQLException"},
	{"setShowDeleted", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, setShowDeleted, void, bool), "java.sql.SQLException"},
	{"setSyncProvider", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, setSyncProvider, void, $String*), "java.sql.SQLException"},
	{"setTableName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, setTableName, void, $String*), "java.sql.SQLException"},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, size, int32_t)},
	{"toCollection", "()Ljava/util/Collection;", "()Ljava/util/Collection<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, toCollection, $Collection*), "java.sql.SQLException"},
	{"toCollection", "(I)Ljava/util/Collection;", "(I)Ljava/util/Collection<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, toCollection, $Collection*, int32_t), "java.sql.SQLException"},
	{"toCollection", "(Ljava/lang/String;)Ljava/util/Collection;", "(Ljava/lang/String;)Ljava/util/Collection<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, toCollection, $Collection*, $String*), "java.sql.SQLException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"undoDelete", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, undoDelete, void), "java.sql.SQLException"},
	{"undoInsert", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, undoInsert, void), "java.sql.SQLException"},
	{"undoUpdate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CachedRowSet, undoUpdate, void), "java.sql.SQLException"},
	{}
};

$ClassInfo _CachedRowSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.rowset.CachedRowSet",
	nullptr,
	"javax.sql.RowSet,javax.sql.rowset.Joinable",
	_CachedRowSet_FieldInfo_,
	_CachedRowSet_MethodInfo_
};

$Object* allocate$CachedRowSet($Class* clazz) {
	return $of($alloc(CachedRowSet));
}

int32_t CachedRowSet::hashCode() {
	 return this->$RowSet::hashCode();
}

bool CachedRowSet::equals(Object$* arg0) {
	 return this->$RowSet::equals(arg0);
}

$Object* CachedRowSet::clone() {
	 return this->$RowSet::clone();
}

$String* CachedRowSet::toString() {
	 return this->$RowSet::toString();
}

void CachedRowSet::finalize() {
	this->$RowSet::finalize();
}

$Class* CachedRowSet::load$($String* name, bool initialize) {
	$loadClass(CachedRowSet, name, initialize, &_CachedRowSet_ClassInfo_, allocate$CachedRowSet);
	return class$;
}

$Class* CachedRowSet::class$ = nullptr;

		} // rowset
	} // sql
} // javax