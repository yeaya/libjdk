#include <com/sun/rowset/CachedRowSetImpl$1.h>
#include <com/sun/rowset/CachedRowSetImpl.h>
#include <javax/sql/rowset/spi/SyncFactory.h>
#include <javax/sql/rowset/spi/SyncProvider.h>
#include <jcpp.h>

#undef DEFAULT_SYNC_PROVIDER

using $CachedRowSetImpl = ::com::sun::rowset::CachedRowSetImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SyncFactory = ::javax::sql::rowset::spi::SyncFactory;

namespace com {
	namespace sun {
		namespace rowset {

void CachedRowSetImpl$1::init$($CachedRowSetImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* CachedRowSetImpl$1::run() {
	return $SyncFactory::getInstance(this->this$0->DEFAULT_SYNC_PROVIDER);
}

CachedRowSetImpl$1::CachedRowSetImpl$1() {
}

$Class* CachedRowSetImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/rowset/CachedRowSetImpl;", nullptr, $FINAL | $SYNTHETIC, $field(CachedRowSetImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/rowset/CachedRowSetImpl;)V", nullptr, 0, $method(CachedRowSetImpl$1, init$, void, $CachedRowSetImpl*)},
		{"run", "()Ljavax/sql/rowset/spi/SyncProvider;", nullptr, $PUBLIC, $virtualMethod(CachedRowSetImpl$1, run, $Object*), "javax.sql.rowset.spi.SyncFactoryException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.rowset.CachedRowSetImpl",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.rowset.CachedRowSetImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.rowset.CachedRowSetImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/sql/rowset/spi/SyncProvider;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.rowset.CachedRowSetImpl"
	};
	$loadClass(CachedRowSetImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CachedRowSetImpl$1);
	});
	return class$;
}

$Class* CachedRowSetImpl$1::class$ = nullptr;

		} // rowset
	} // sun
} // com