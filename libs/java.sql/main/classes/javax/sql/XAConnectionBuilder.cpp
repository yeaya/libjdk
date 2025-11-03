#include <javax/sql/XAConnectionBuilder.h>

#include <java/sql/ShardingKey.h>
#include <javax/sql/XAConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShardingKey = ::java::sql::ShardingKey;
using $XAConnection = ::javax::sql::XAConnection;

namespace javax {
	namespace sql {

$MethodInfo _XAConnectionBuilder_MethodInfo_[] = {
	{"build", "()Ljavax/sql/XAConnection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"password", "(Ljava/lang/String;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"shardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"superShardingKey", "(Ljava/sql/ShardingKey;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"user", "(Ljava/lang/String;)Ljavax/sql/XAConnectionBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XAConnectionBuilder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.XAConnectionBuilder",
	nullptr,
	nullptr,
	nullptr,
	_XAConnectionBuilder_MethodInfo_
};

$Object* allocate$XAConnectionBuilder($Class* clazz) {
	return $of($alloc(XAConnectionBuilder));
}

$Class* XAConnectionBuilder::load$($String* name, bool initialize) {
	$loadClass(XAConnectionBuilder, name, initialize, &_XAConnectionBuilder_ClassInfo_, allocate$XAConnectionBuilder);
	return class$;
}

$Class* XAConnectionBuilder::class$ = nullptr;

	} // sql
} // javax