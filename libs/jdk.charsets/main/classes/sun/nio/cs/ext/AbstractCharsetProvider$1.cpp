#include <sun/nio/cs/ext/AbstractCharsetProvider$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/charset/Charset.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <sun/nio/cs/ext/AbstractCharsetProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Charset = ::java::nio::charset::Charset;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $AbstractCharsetProvider = ::sun::nio::cs::ext::AbstractCharsetProvider;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _AbstractCharsetProvider$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/cs/ext/AbstractCharsetProvider;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractCharsetProvider$1, this$0)},
	{"val$ks", "Ljava/util/ArrayList;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractCharsetProvider$1, val$ks)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", 0, $field(AbstractCharsetProvider$1, i)},
	{}
};

$MethodInfo _AbstractCharsetProvider$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/cs/ext/AbstractCharsetProvider;Ljava/util/ArrayList;)V", "()V", 0, $method(static_cast<void(AbstractCharsetProvider$1::*)($AbstractCharsetProvider*,$ArrayList*)>(&AbstractCharsetProvider$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractCharsetProvider$1_EnclosingMethodInfo_ = {
	"sun.nio.cs.ext.AbstractCharsetProvider",
	"charsets",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _AbstractCharsetProvider$1_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.AbstractCharsetProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractCharsetProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.AbstractCharsetProvider$1",
	"java.lang.Object",
	"java.util.Iterator",
	_AbstractCharsetProvider$1_FieldInfo_,
	_AbstractCharsetProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/charset/Charset;>;",
	&_AbstractCharsetProvider$1_EnclosingMethodInfo_,
	_AbstractCharsetProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.AbstractCharsetProvider"
};

$Object* allocate$AbstractCharsetProvider$1($Class* clazz) {
	return $of($alloc(AbstractCharsetProvider$1));
}

void AbstractCharsetProvider$1::init$($AbstractCharsetProvider* this$0, $ArrayList* val$ks) {
	$set(this, this$0, this$0);
	$set(this, val$ks, val$ks);
	$set(this, i, $nc(this->val$ks)->iterator());
}

bool AbstractCharsetProvider$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* AbstractCharsetProvider$1::next() {
	$var($String, csn, $cast($String, $nc(this->i)->next()));
	$synchronized(this->this$0) {
		return $of(this->this$0->lookup(csn));
	}
}

void AbstractCharsetProvider$1::remove() {
	$throwNew($UnsupportedOperationException);
}

AbstractCharsetProvider$1::AbstractCharsetProvider$1() {
}

$Class* AbstractCharsetProvider$1::load$($String* name, bool initialize) {
	$loadClass(AbstractCharsetProvider$1, name, initialize, &_AbstractCharsetProvider$1_ClassInfo_, allocate$AbstractCharsetProvider$1);
	return class$;
}

$Class* AbstractCharsetProvider$1::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun