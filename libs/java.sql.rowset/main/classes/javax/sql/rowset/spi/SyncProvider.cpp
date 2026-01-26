#include <javax/sql/rowset/spi/SyncProvider.h>

#include <javax/sql/RowSetReader.h>
#include <javax/sql/RowSetWriter.h>
#include <jcpp.h>

#undef DATASOURCE_DB_LOCK
#undef DATASOURCE_NO_LOCK
#undef DATASOURCE_ROW_LOCK
#undef DATASOURCE_TABLE_LOCK
#undef GRADE_CHECK_ALL_AT_COMMIT
#undef GRADE_CHECK_MODIFIED_AT_COMMIT
#undef GRADE_LOCK_WHEN_LOADED
#undef GRADE_LOCK_WHEN_MODIFIED
#undef GRADE_NONE
#undef NONUPDATABLE_VIEW_SYNC
#undef UPDATABLE_VIEW_SYNC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSetReader = ::javax::sql::RowSetReader;
using $RowSetWriter = ::javax::sql::RowSetWriter;

namespace javax {
	namespace sql {
		namespace rowset {
			namespace spi {

$FieldInfo _SyncProvider_FieldInfo_[] = {
	{"GRADE_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, GRADE_NONE)},
	{"GRADE_CHECK_MODIFIED_AT_COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, GRADE_CHECK_MODIFIED_AT_COMMIT)},
	{"GRADE_CHECK_ALL_AT_COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, GRADE_CHECK_ALL_AT_COMMIT)},
	{"GRADE_LOCK_WHEN_MODIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, GRADE_LOCK_WHEN_MODIFIED)},
	{"GRADE_LOCK_WHEN_LOADED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, GRADE_LOCK_WHEN_LOADED)},
	{"DATASOURCE_NO_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, DATASOURCE_NO_LOCK)},
	{"DATASOURCE_ROW_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, DATASOURCE_ROW_LOCK)},
	{"DATASOURCE_TABLE_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, DATASOURCE_TABLE_LOCK)},
	{"DATASOURCE_DB_LOCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, DATASOURCE_DB_LOCK)},
	{"UPDATABLE_VIEW_SYNC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, UPDATABLE_VIEW_SYNC)},
	{"NONUPDATABLE_VIEW_SYNC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SyncProvider, NONUPDATABLE_VIEW_SYNC)},
	{}
};

$MethodInfo _SyncProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SyncProvider, init$, void)},
	{"getDataSourceLock", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, getDataSourceLock, int32_t), "javax.sql.rowset.spi.SyncProviderException"},
	{"getProviderGrade", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, getProviderGrade, int32_t)},
	{"getProviderID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, getProviderID, $String*)},
	{"getRowSetReader", "()Ljavax/sql/RowSetReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, getRowSetReader, $RowSetReader*)},
	{"getRowSetWriter", "()Ljavax/sql/RowSetWriter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, getRowSetWriter, $RowSetWriter*)},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, getVendor, $String*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, getVersion, $String*)},
	{"setDataSourceLock", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, setDataSourceLock, void, int32_t), "javax.sql.rowset.spi.SyncProviderException"},
	{"supportsUpdatableView", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SyncProvider, supportsUpdatableView, int32_t)},
	{}
};

$ClassInfo _SyncProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sql.rowset.spi.SyncProvider",
	"java.lang.Object",
	nullptr,
	_SyncProvider_FieldInfo_,
	_SyncProvider_MethodInfo_
};

$Object* allocate$SyncProvider($Class* clazz) {
	return $of($alloc(SyncProvider));
}

void SyncProvider::init$() {
}

SyncProvider::SyncProvider() {
}

$Class* SyncProvider::load$($String* name, bool initialize) {
	$loadClass(SyncProvider, name, initialize, &_SyncProvider_ClassInfo_, allocate$SyncProvider);
	return class$;
}

$Class* SyncProvider::class$ = nullptr;

			} // spi
		} // rowset
	} // sql
} // javax