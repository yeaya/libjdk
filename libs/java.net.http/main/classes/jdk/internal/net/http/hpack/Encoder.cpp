#include <jdk/internal/net/http/hpack/Encoder.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/hpack/BinaryRepresentationWriter.h>
#include <jdk/internal/net/http/hpack/BulkSizeUpdateWriter.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger$Level.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger.h>
#include <jdk/internal/net/http/hpack/HPACK.h>
#include <jdk/internal/net/http/hpack/HeaderTable.h>
#include <jdk/internal/net/http/hpack/IndexNameValueWriter.h>
#include <jdk/internal/net/http/hpack/IndexedWriter.h>
#include <jdk/internal/net/http/hpack/LiteralNeverIndexedWriter.h>
#include <jdk/internal/net/http/hpack/LiteralWithIndexingWriter.h>
#include <jdk/internal/net/http/hpack/LiteralWriter.h>
#include <jdk/internal/net/http/hpack/QuickHuffman$Writer.h>
#include <jdk/internal/net/http/hpack/SizeUpdateWriter.h>
#include <jcpp.h>

#undef ENCODERS_IDS
#undef EXTRA
#undef MAX_VALUE
#undef NORMAL

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $Supplier = ::java::util::function::Supplier;
using $BulkSizeUpdateWriter = ::jdk::internal::net::http::hpack::BulkSizeUpdateWriter;
using $HPACK = ::jdk::internal::net::http::hpack::HPACK;
using $HPACK$Logger$Level = ::jdk::internal::net::http::hpack::HPACK$Logger$Level;
using $HeaderTable = ::jdk::internal::net::http::hpack::HeaderTable;
using $IndexedWriter = ::jdk::internal::net::http::hpack::IndexedWriter;
using $LiteralNeverIndexedWriter = ::jdk::internal::net::http::hpack::LiteralNeverIndexedWriter;
using $LiteralWithIndexingWriter = ::jdk::internal::net::http::hpack::LiteralWithIndexingWriter;
using $LiteralWriter = ::jdk::internal::net::http::hpack::LiteralWriter;
using $QuickHuffman$Writer = ::jdk::internal::net::http::hpack::QuickHuffman$Writer;
using $SizeUpdateWriter = ::jdk::internal::net::http::hpack::SizeUpdateWriter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class Encoder$$Lambda$lambda$new$0 : public $Supplier {
	$class(Encoder$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t maxCapacity) {
		this->maxCapacity = maxCapacity;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$new$0(maxCapacity));
	}
	int32_t maxCapacity = 0;
};
$Class* Encoder$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"maxCapacity", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$new$0, maxCapacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$new$0, init$, void, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$new$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$new$0::class$ = nullptr;

class Encoder$$Lambda$lambda$new$1$1 : public $Supplier {
	$class(Encoder$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Encoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$new$1());
	}
	Encoder* inst$ = nullptr;
};
$Class* Encoder$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$new$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Encoder;)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$new$1$1, init$, void, Encoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$new$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$new$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$new$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$new$1$1);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$new$1$1::class$ = nullptr;

class Encoder$$Lambda$lambda$header$2$2 : public $Supplier {
	$class(Encoder$$Lambda$lambda$header$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$($CharSequence* name, $CharSequence* value, bool sensitive) {
		$set(this, name, name);
		$set(this, value, value);
		this->sensitive = sensitive;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$header$2(name, value, sensitive));
	}
	$CharSequence* name = nullptr;
	$CharSequence* value = nullptr;
	bool sensitive = false;
};
$Class* Encoder$$Lambda$lambda$header$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$header$2$2, name)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$header$2$2, value)},
		{"sensitive", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$header$2$2, sensitive)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$header$2$2, init$, void, $CharSequence*, $CharSequence*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$header$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$header$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$header$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$header$2$2);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$header$2$2::class$ = nullptr;

class Encoder$$Lambda$lambda$setMaxCapacity$3$3 : public $Supplier {
	$class(Encoder$$Lambda$lambda$setMaxCapacity$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t capacity) {
		this->capacity = capacity;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$setMaxCapacity$3(capacity));
	}
	int32_t capacity = 0;
};
$Class* Encoder$$Lambda$lambda$setMaxCapacity$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"capacity", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$setMaxCapacity$3$3, capacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$setMaxCapacity$3$3, init$, void, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$setMaxCapacity$3$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$setMaxCapacity$3$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$setMaxCapacity$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$setMaxCapacity$3$3);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$setMaxCapacity$3$3::class$ = nullptr;

class Encoder$$Lambda$lambda$setMaxCapacity0$4$4 : public $Supplier {
	$class(Encoder$$Lambda$lambda$setMaxCapacity0$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t calculated) {
		this->calculated = calculated;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$setMaxCapacity0$4(calculated));
	}
	int32_t calculated = 0;
};
$Class* Encoder$$Lambda$lambda$setMaxCapacity0$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"calculated", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$setMaxCapacity0$4$4, calculated)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$setMaxCapacity0$4$4, init$, void, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$setMaxCapacity0$4$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$setMaxCapacity0$4$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$setMaxCapacity0$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$setMaxCapacity0$4$4);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$setMaxCapacity0$4$4::class$ = nullptr;

class Encoder$$Lambda$lambda$encode$5$5 : public $Supplier {
	$class(Encoder$$Lambda$lambda$encode$5$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($ByteBuffer* headerBlock) {
		$set(this, headerBlock, headerBlock);
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$encode$5(headerBlock));
	}
	$ByteBuffer* headerBlock = nullptr;
};
$Class* Encoder$$Lambda$lambda$encode$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"headerBlock", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$encode$5$5, headerBlock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$encode$5$5, init$, void, $ByteBuffer*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$encode$5$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$encode$5$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$encode$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$encode$5$5);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$encode$5$5::class$ = nullptr;

class Encoder$$Lambda$lambda$indexed$6$6 : public $Supplier {
	$class(Encoder$$Lambda$lambda$indexed$6$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t index) {
		this->index = index;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$indexed$6(index));
	}
	int32_t index = 0;
};
$Class* Encoder$$Lambda$lambda$indexed$6$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$indexed$6$6, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$indexed$6$6, init$, void, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$indexed$6$6, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$indexed$6$6",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$indexed$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$indexed$6$6);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$indexed$6$6::class$ = nullptr;

class Encoder$$Lambda$lambda$literal$7$7 : public $Supplier {
	$class(Encoder$$Lambda$lambda$literal$7$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t index, $CharSequence* value, bool useHuffman) {
		this->index = index;
		$set(this, value, value);
		this->useHuffman = useHuffman;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$literal$7(index, value, useHuffman));
	}
	int32_t index = 0;
	$CharSequence* value = nullptr;
	bool useHuffman = false;
};
$Class* Encoder$$Lambda$lambda$literal$7$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literal$7$7, index)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literal$7$7, value)},
		{"useHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literal$7$7, useHuffman)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$literal$7$7, init$, void, int32_t, $CharSequence*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$literal$7$7, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literal$7$7",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$literal$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$literal$7$7);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$literal$7$7::class$ = nullptr;

class Encoder$$Lambda$lambda$literal$8$8 : public $Supplier {
	$class(Encoder$$Lambda$lambda$literal$8$8, $NO_CLASS_INIT, $Supplier)
public:
	void init$($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
		$set(this, name, name);
		this->nameHuffman = nameHuffman;
		$set(this, value, value);
		this->valueHuffman = valueHuffman;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$literal$8(name, nameHuffman, value, valueHuffman));
	}
	$CharSequence* name = nullptr;
	bool nameHuffman = false;
	$CharSequence* value = nullptr;
	bool valueHuffman = false;
};
$Class* Encoder$$Lambda$lambda$literal$8$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literal$8$8, name)},
		{"nameHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literal$8$8, nameHuffman)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literal$8$8, value)},
		{"valueHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literal$8$8, valueHuffman)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$literal$8$8, init$, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$literal$8$8, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literal$8$8",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$literal$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$literal$8$8);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$literal$8$8::class$ = nullptr;

class Encoder$$Lambda$lambda$literalNeverIndexed$9$9 : public $Supplier {
	$class(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t index, $CharSequence* value, bool valueHuffman) {
		this->index = index;
		$set(this, value, value);
		this->valueHuffman = valueHuffman;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$literalNeverIndexed$9(index, value, valueHuffman));
	}
	int32_t index = 0;
	$CharSequence* value = nullptr;
	bool valueHuffman = false;
};
$Class* Encoder$$Lambda$lambda$literalNeverIndexed$9$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, index)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, value)},
		{"valueHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, valueHuffman)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, init$, void, int32_t, $CharSequence*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalNeverIndexed$9$9",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$literalNeverIndexed$9$9);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$literalNeverIndexed$9$9::class$ = nullptr;

class Encoder$$Lambda$lambda$literalNeverIndexed$10$10 : public $Supplier {
	$class(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
		$set(this, name, name);
		this->nameHuffman = nameHuffman;
		$set(this, value, value);
		this->valueHuffman = valueHuffman;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$literalNeverIndexed$10(name, nameHuffman, value, valueHuffman));
	}
	$CharSequence* name = nullptr;
	bool nameHuffman = false;
	$CharSequence* value = nullptr;
	bool valueHuffman = false;
};
$Class* Encoder$$Lambda$lambda$literalNeverIndexed$10$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, name)},
		{"nameHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, nameHuffman)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, value)},
		{"valueHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, valueHuffman)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, init$, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalNeverIndexed$10$10",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$literalNeverIndexed$10$10);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$literalNeverIndexed$10$10::class$ = nullptr;

class Encoder$$Lambda$lambda$literalWithIndexing$11$11 : public $Supplier {
	$class(Encoder$$Lambda$lambda$literalWithIndexing$11$11, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t index, $CharSequence* value, bool valueHuffman) {
		this->index = index;
		$set(this, value, value);
		this->valueHuffman = valueHuffman;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$literalWithIndexing$11(index, value, valueHuffman));
	}
	int32_t index = 0;
	$CharSequence* value = nullptr;
	bool valueHuffman = false;
};
$Class* Encoder$$Lambda$lambda$literalWithIndexing$11$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalWithIndexing$11$11, index)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalWithIndexing$11$11, value)},
		{"valueHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalWithIndexing$11$11, valueHuffman)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$literalWithIndexing$11$11, init$, void, int32_t, $CharSequence*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$literalWithIndexing$11$11, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalWithIndexing$11$11",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$literalWithIndexing$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$literalWithIndexing$11$11);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$literalWithIndexing$11$11::class$ = nullptr;

class Encoder$$Lambda$lambda$literalWithIndexing$12$12 : public $Supplier {
	$class(Encoder$$Lambda$lambda$literalWithIndexing$12$12, $NO_CLASS_INIT, $Supplier)
public:
	void init$($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
		$set(this, name, name);
		this->nameHuffman = nameHuffman;
		$set(this, value, value);
		this->valueHuffman = valueHuffman;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$literalWithIndexing$12(name, nameHuffman, value, valueHuffman));
	}
	$CharSequence* name = nullptr;
	bool nameHuffman = false;
	$CharSequence* value = nullptr;
	bool valueHuffman = false;
};
$Class* Encoder$$Lambda$lambda$literalWithIndexing$12$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalWithIndexing$12$12, name)},
		{"nameHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalWithIndexing$12$12, nameHuffman)},
		{"value", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalWithIndexing$12$12, value)},
		{"valueHuffman", "Z", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$literalWithIndexing$12$12, valueHuffman)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$literalWithIndexing$12$12, init$, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$literalWithIndexing$12$12, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalWithIndexing$12$12",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$literalWithIndexing$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$literalWithIndexing$12$12);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$literalWithIndexing$12$12::class$ = nullptr;

class Encoder$$Lambda$lambda$sizeUpdate$13$13 : public $Supplier {
	$class(Encoder$$Lambda$lambda$sizeUpdate$13$13, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t capacity) {
		this->capacity = capacity;
	}
	virtual $Object* get() override {
		 return $of(Encoder::lambda$sizeUpdate$13(capacity));
	}
	int32_t capacity = 0;
};
$Class* Encoder$$Lambda$lambda$sizeUpdate$13$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"capacity", "I", nullptr, $PUBLIC, $field(Encoder$$Lambda$lambda$sizeUpdate$13$13, capacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Encoder$$Lambda$lambda$sizeUpdate$13$13, init$, void, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Encoder$$Lambda$lambda$sizeUpdate$13$13, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$sizeUpdate$13$13",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder$$Lambda$lambda$sizeUpdate$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder$$Lambda$lambda$sizeUpdate$13$13);
	});
	return class$;
}
$Class* Encoder$$Lambda$lambda$sizeUpdate$13$13::class$ = nullptr;

$AtomicLong* Encoder::ENCODERS_IDS = nullptr;

void Encoder::init$(int32_t maxCapacity) {
	$useLocalObjectStack();
	$set(this, huffmanWriter, $new($QuickHuffman$Writer));
	$set(this, indexedWriter, $new($IndexedWriter));
	$set(this, literalWriter, $new($LiteralWriter));
	$set(this, literalNeverIndexedWriter, $new($LiteralNeverIndexedWriter));
	$set(this, literalWithIndexingWriter, $new($LiteralWithIndexingWriter));
	$set(this, sizeUpdateWriter, $new($SizeUpdateWriter));
	$set(this, bulkSizeUpdateWriter, $new($BulkSizeUpdateWriter));
	this->id = Encoder::ENCODERS_IDS->incrementAndGet();
	$set(this, logger, $$nc($HPACK::getLogger())->subLogger($$str({"Encoder#"_s, $$str(this->id)})));
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Encoder$$Lambda$lambda$new$0, maxCapacity));
	}
	if (this->logger->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$new$1$1, this));
	}
	if (maxCapacity < 0) {
		$throwNew($IllegalArgumentException, $$str({"maxCapacity >= 0: "_s, $$str(maxCapacity)}));
	}
	this->minCapacity = $Long::MAX_VALUE;
	this->currCapacity = -1;
	setMaxCapacity0(maxCapacity);
	$set(this, headerTable, $new($HeaderTable, this->lastCapacity, $(this->logger->subLogger("HeaderTable"_s))));
}

void Encoder::header($CharSequence* name, $CharSequence* value) {
	header(name, value, false);
}

void Encoder::header($CharSequence* name, $CharSequence* value, bool sensitive) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Encoder$$Lambda$lambda$header$2$2, name, value, sensitive));
	}
	$Objects::requireNonNull(name, "name"_s);
	$Objects::requireNonNull(value, "value"_s);
	$var($HeaderTable, t, getHeaderTable());
	int32_t index = $nc(t)->indexOf(name, value);
	if (index > 0) {
		indexed(index);
	} else {
		bool huffmanValue = isHuffmanBetterFor(value);
		if (index < 0) {
			if (sensitive) {
				literalNeverIndexed(-index, value, huffmanValue);
			} else {
				literal(-index, value, huffmanValue);
			}
		} else {
			bool huffmanName = isHuffmanBetterFor(name);
			if (sensitive) {
				literalNeverIndexed(name, huffmanName, value, huffmanValue);
			} else {
				literal(name, huffmanName, value, huffmanValue);
			}
		}
	}
}

bool Encoder::isHuffmanBetterFor($CharSequence* value) {
	int32_t var$0 = this->huffmanWriter->lengthOf(value);
	return var$0 < $nc(value)->length();
}

void Encoder::setMaxCapacity(int32_t capacity) {
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Encoder$$Lambda$lambda$setMaxCapacity$3$3, capacity));
	}
	setMaxCapacity0(capacity);
}

void Encoder::setMaxCapacity0(int32_t capacity) {
	$useLocalObjectStack();
	checkEncoding();
	if (capacity < 0) {
		$throwNew($IllegalArgumentException, $$str({"capacity >= 0: "_s, $$str(capacity)}));
	}
	int32_t calculated = calculateCapacity(capacity);
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Encoder$$Lambda$lambda$setMaxCapacity0$4$4, calculated));
	}
	if (calculated < 0 || calculated > capacity) {
		$throwNew($IllegalArgumentException, $($String::format("0 <= calculated <= capacity: calculated=%s, capacity=%s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(calculated)),
			$($Integer::valueOf(capacity))
		}))));
	}
	this->capacityUpdate = true;
	this->maxCapacity = capacity;
	this->lastCapacity = calculated;
	this->minCapacity = $Math::min(this->minCapacity, (int64_t)this->lastCapacity);
}

int32_t Encoder::calculateCapacity(int32_t maxCapacity) {
	return 0;
}

bool Encoder::encode($ByteBuffer* headerBlock) {
	if (!this->encoding) {
		$throwNew($IllegalStateException, "A header hasn\'t been set up"_s);
	}
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$encode$5$5, headerBlock));
	}
	if (!prependWithCapacityUpdate(headerBlock)) {
		return false;
	}
	bool done = $nc(this->writer)->write(this->headerTable, headerBlock);
	if (done) {
		$nc(this->writer)->reset();
		this->encoding = false;
	}
	return done;
}

bool Encoder::prependWithCapacityUpdate($ByteBuffer* headerBlock) {
	$useLocalObjectStack();
	if (this->capacityUpdate) {
		if (!this->configuredCapacityUpdate) {
			$var($List, sizes, $new($LinkedList));
			if (this->minCapacity < this->currCapacity) {
				sizes->add($($Integer::valueOf((int32_t)this->minCapacity)));
				if (this->minCapacity != this->lastCapacity) {
					sizes->add($($Integer::valueOf(this->lastCapacity)));
				}
			} else if (this->lastCapacity != this->currCapacity) {
				sizes->add($($Integer::valueOf(this->lastCapacity)));
			}
			this->bulkSizeUpdateWriter->maxHeaderTableSizes(sizes);
			this->configuredCapacityUpdate = true;
		}
		bool done = this->bulkSizeUpdateWriter->write(this->headerTable, headerBlock);
		if (done) {
			this->minCapacity = this->lastCapacity;
			this->currCapacity = this->lastCapacity;
			this->bulkSizeUpdateWriter->reset();
			this->capacityUpdate = false;
			this->configuredCapacityUpdate = false;
		}
		return done;
	}
	return true;
}

void Encoder::indexed(int32_t index) {
	checkEncoding();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$indexed$6$6, index));
	}
	this->encoding = true;
	$set(this, writer, this->indexedWriter->index(index));
}

void Encoder::literal(int32_t index, $CharSequence* value, bool useHuffman) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$literal$7$7, index, value, useHuffman));
	}
	checkEncoding();
	this->encoding = true;
	$set(this, writer, $$nc(this->literalWriter->index(index))->value(value, useHuffman));
}

void Encoder::literal($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$literal$8$8, name, nameHuffman, value, valueHuffman));
	}
	checkEncoding();
	this->encoding = true;
	$set(this, writer, $$nc(this->literalWriter->name(name, nameHuffman))->value(value, valueHuffman));
}

void Encoder::literalNeverIndexed(int32_t index, $CharSequence* value, bool valueHuffman) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$literalNeverIndexed$9$9, index, value, valueHuffman));
	}
	checkEncoding();
	this->encoding = true;
	$set(this, writer, $$nc(this->literalNeverIndexedWriter->index(index))->value(value, valueHuffman));
}

void Encoder::literalNeverIndexed($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$literalNeverIndexed$10$10, name, nameHuffman, value, valueHuffman));
	}
	checkEncoding();
	this->encoding = true;
	$set(this, writer, $$nc(this->literalNeverIndexedWriter->name(name, nameHuffman))->value(value, valueHuffman));
}

void Encoder::literalWithIndexing(int32_t index, $CharSequence* value, bool valueHuffman) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$literalWithIndexing$11$11, index, value, valueHuffman));
	}
	checkEncoding();
	this->encoding = true;
	$set(this, writer, $$nc(this->literalWithIndexingWriter->index(index))->value(value, valueHuffman));
}

void Encoder::literalWithIndexing($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$literalWithIndexing$12$12, name, nameHuffman, value, valueHuffman));
	}
	checkEncoding();
	this->encoding = true;
	$set(this, writer, $$nc(this->literalWithIndexingWriter->name(name, nameHuffman))->value(value, valueHuffman));
}

void Encoder::sizeUpdate(int32_t capacity) {
	$useLocalObjectStack();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Encoder$$Lambda$lambda$sizeUpdate$13$13, capacity));
	}
	checkEncoding();
	if (capacity > this->maxCapacity) {
		$throwNew($IllegalArgumentException, $($String::format("capacity <= maxCapacity: capacity=%s, maxCapacity=%s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(capacity)),
			$($Integer::valueOf(this->maxCapacity))
		}))));
	}
	$set(this, writer, this->sizeUpdateWriter->maxHeaderTableSize(capacity));
}

int32_t Encoder::getMaxCapacity() {
	return this->maxCapacity;
}

$HeaderTable* Encoder::getHeaderTable() {
	return this->headerTable;
}

void Encoder::checkEncoding() {
	if (this->encoding) {
		$throwNew($IllegalStateException, "Previous encoding operation hasn\'t finished yet"_s);
	}
}

$String* Encoder::lambda$sizeUpdate$13(int32_t capacity) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("dynamic table size update %s"_s, $$new($ObjectArray, {$($Integer::valueOf(capacity))}));
}

$String* Encoder::lambda$literalWithIndexing$12($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("literal with incremental indexing (\'%s\', huffman=%b, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		name,
		$($Boolean::valueOf(nameHuffman)),
		value,
		$($Boolean::valueOf(valueHuffman))
	}));
}

$String* Encoder::lambda$literalWithIndexing$11(int32_t index, $CharSequence* value, bool valueHuffman) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("literal with incremental indexing (%s, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		$($Integer::valueOf(index)),
		value,
		$($Boolean::valueOf(valueHuffman))
	}));
}

$String* Encoder::lambda$literalNeverIndexed$10($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("literal never indexed (\'%s\', huffman=%b, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		name,
		$($Boolean::valueOf(nameHuffman)),
		value,
		$($Boolean::valueOf(valueHuffman))
	}));
}

$String* Encoder::lambda$literalNeverIndexed$9(int32_t index, $CharSequence* value, bool valueHuffman) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("literal never indexed (%s, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		$($Integer::valueOf(index)),
		value,
		$($Boolean::valueOf(valueHuffman))
	}));
}

$String* Encoder::lambda$literal$8($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("literal without indexing (\'%s\', huffman=%b, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		name,
		$($Boolean::valueOf(nameHuffman)),
		value,
		$($Boolean::valueOf(valueHuffman))
	}));
}

$String* Encoder::lambda$literal$7(int32_t index, $CharSequence* value, bool useHuffman) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("literal without indexing (%s, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		$($Integer::valueOf(index)),
		value,
		$($Boolean::valueOf(useHuffman))
	}));
}

$String* Encoder::lambda$indexed$6(int32_t index) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("indexed %s"_s, $$new($ObjectArray, {$($Integer::valueOf(index))}));
}

$String* Encoder::lambda$encode$5($ByteBuffer* headerBlock) {
	$init(Encoder);
	return $String::format("writing to %s"_s, $$new($ObjectArray, {headerBlock}));
}

$String* Encoder::lambda$setMaxCapacity0$4(int32_t calculated) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("actual maximum table size will be %s"_s, $$new($ObjectArray, {$($Integer::valueOf(calculated))}));
}

$String* Encoder::lambda$setMaxCapacity$3(int32_t capacity) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("setting maximum table size to %s"_s, $$new($ObjectArray, {$($Integer::valueOf(capacity))}));
}

$String* Encoder::lambda$header$2($CharSequence* name, $CharSequence* value, bool sensitive) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("encoding (\'%s\', \'%s\'), sensitive: %s"_s, $$new($ObjectArray, {
		name,
		value,
		$($Boolean::valueOf(sensitive))
	}));
}

$String* Encoder::lambda$new$1() {
	$useLocalObjectStack();
	$var($String, hashCode, $Integer::toHexString($System::identityHashCode(this)));
	return $String::format("toString=\'%s\', hashCode=%s, identityHashCode=%s"_s, $$new($ObjectArray, {
		$(toString()),
		$($Integer::valueOf(this->hashCode())),
		hashCode
	}));
}

$String* Encoder::lambda$new$0(int32_t maxCapacity) {
	$init(Encoder);
	$useLocalObjectStack();
	return $String::format("new encoder with maximum table size %s"_s, $$new($ObjectArray, {$($Integer::valueOf(maxCapacity))}));
}

void Encoder::clinit$($Class* clazz) {
	$assignStatic(Encoder::ENCODERS_IDS, $new($AtomicLong));
}

Encoder::Encoder() {
}

$Class* Encoder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$new$0")) {
			return Encoder$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$new$1$1")) {
			return Encoder$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$header$2$2")) {
			return Encoder$$Lambda$lambda$header$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$setMaxCapacity$3$3")) {
			return Encoder$$Lambda$lambda$setMaxCapacity$3$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$setMaxCapacity0$4$4")) {
			return Encoder$$Lambda$lambda$setMaxCapacity0$4$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$encode$5$5")) {
			return Encoder$$Lambda$lambda$encode$5$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$indexed$6$6")) {
			return Encoder$$Lambda$lambda$indexed$6$6::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literal$7$7")) {
			return Encoder$$Lambda$lambda$literal$7$7::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literal$8$8")) {
			return Encoder$$Lambda$lambda$literal$8$8::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalNeverIndexed$9$9")) {
			return Encoder$$Lambda$lambda$literalNeverIndexed$9$9::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalNeverIndexed$10$10")) {
			return Encoder$$Lambda$lambda$literalNeverIndexed$10$10::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalWithIndexing$11$11")) {
			return Encoder$$Lambda$lambda$literalWithIndexing$11$11::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$literalWithIndexing$12$12")) {
			return Encoder$$Lambda$lambda$literalWithIndexing$12$12::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Encoder$$Lambda$lambda$sizeUpdate$13$13")) {
			return Encoder$$Lambda$lambda$sizeUpdate$13$13::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"ENCODERS_IDS", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Encoder, ENCODERS_IDS)},
		{"huffmanWriter", "Ljdk/internal/net/http/hpack/QuickHuffman$Writer;", nullptr, $PRIVATE | $FINAL, $field(Encoder, huffmanWriter)},
		{"logger", "Ljdk/internal/net/http/hpack/HPACK$Logger;", nullptr, $PRIVATE | $FINAL, $field(Encoder, logger)},
		{"id", "J", nullptr, $PRIVATE | $FINAL, $field(Encoder, id)},
		{"indexedWriter", "Ljdk/internal/net/http/hpack/IndexedWriter;", nullptr, $PRIVATE | $FINAL, $field(Encoder, indexedWriter)},
		{"literalWriter", "Ljdk/internal/net/http/hpack/LiteralWriter;", nullptr, $PRIVATE | $FINAL, $field(Encoder, literalWriter)},
		{"literalNeverIndexedWriter", "Ljdk/internal/net/http/hpack/LiteralNeverIndexedWriter;", nullptr, $PRIVATE | $FINAL, $field(Encoder, literalNeverIndexedWriter)},
		{"literalWithIndexingWriter", "Ljdk/internal/net/http/hpack/LiteralWithIndexingWriter;", nullptr, $PRIVATE | $FINAL, $field(Encoder, literalWithIndexingWriter)},
		{"sizeUpdateWriter", "Ljdk/internal/net/http/hpack/SizeUpdateWriter;", nullptr, $PRIVATE | $FINAL, $field(Encoder, sizeUpdateWriter)},
		{"bulkSizeUpdateWriter", "Ljdk/internal/net/http/hpack/BulkSizeUpdateWriter;", nullptr, $PRIVATE | $FINAL, $field(Encoder, bulkSizeUpdateWriter)},
		{"writer", "Ljdk/internal/net/http/hpack/BinaryRepresentationWriter;", nullptr, $PRIVATE, $field(Encoder, writer)},
		{"headerTable", "Ljdk/internal/net/http/hpack/HeaderTable;", nullptr, $PRIVATE | $FINAL, $field(Encoder, headerTable)},
		{"encoding", "Z", nullptr, $PRIVATE, $field(Encoder, encoding)},
		{"maxCapacity", "I", nullptr, $PRIVATE, $field(Encoder, maxCapacity)},
		{"currCapacity", "I", nullptr, $PRIVATE, $field(Encoder, currCapacity)},
		{"lastCapacity", "I", nullptr, $PRIVATE, $field(Encoder, lastCapacity)},
		{"minCapacity", "J", nullptr, $PRIVATE, $field(Encoder, minCapacity)},
		{"capacityUpdate", "Z", nullptr, $PRIVATE, $field(Encoder, capacityUpdate)},
		{"configuredCapacityUpdate", "Z", nullptr, $PRIVATE, $field(Encoder, configuredCapacityUpdate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Encoder, init$, void, int32_t)},
		{"calculateCapacity", "(I)I", nullptr, $PROTECTED, $virtualMethod(Encoder, calculateCapacity, int32_t, int32_t)},
		{"checkEncoding", "()V", nullptr, $PROTECTED | $FINAL, $method(Encoder, checkEncoding, void)},
		{"encode", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PUBLIC | $FINAL, $method(Encoder, encode, bool, $ByteBuffer*)},
		{"getHeaderTable", "()Ljdk/internal/net/http/hpack/HeaderTable;", nullptr, $PROTECTED | $FINAL, $method(Encoder, getHeaderTable, $HeaderTable*)},
		{"getMaxCapacity", "()I", nullptr, $PROTECTED | $FINAL, $method(Encoder, getMaxCapacity, int32_t)},
		{"header", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $virtualMethod(Encoder, header, void, $CharSequence*, $CharSequence*), "java.lang.IllegalStateException"},
		{"header", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(Encoder, header, void, $CharSequence*, $CharSequence*, bool), "java.lang.IllegalStateException"},
		{"indexed", "(I)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, indexed, void, int32_t), "java.lang.IndexOutOfBoundsException"},
		{"isHuffmanBetterFor", "(Ljava/lang/CharSequence;)Z", nullptr, $PRIVATE, $method(Encoder, isHuffmanBetterFor, bool, $CharSequence*)},
		{"lambda$encode$5", "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$encode$5, $String*, $ByteBuffer*)},
		{"lambda$header$2", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$header$2, $String*, $CharSequence*, $CharSequence*, bool)},
		{"lambda$indexed$6", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$indexed$6, $String*, int32_t)},
		{"lambda$literal$7", "(ILjava/lang/CharSequence;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$literal$7, $String*, int32_t, $CharSequence*, bool)},
		{"lambda$literal$8", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$literal$8, $String*, $CharSequence*, bool, $CharSequence*, bool)},
		{"lambda$literalNeverIndexed$10", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$literalNeverIndexed$10, $String*, $CharSequence*, bool, $CharSequence*, bool)},
		{"lambda$literalNeverIndexed$9", "(ILjava/lang/CharSequence;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$literalNeverIndexed$9, $String*, int32_t, $CharSequence*, bool)},
		{"lambda$literalWithIndexing$11", "(ILjava/lang/CharSequence;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$literalWithIndexing$11, $String*, int32_t, $CharSequence*, bool)},
		{"lambda$literalWithIndexing$12", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$literalWithIndexing$12, $String*, $CharSequence*, bool, $CharSequence*, bool)},
		{"lambda$new$0", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$new$0, $String*, int32_t)},
		{"lambda$new$1", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Encoder, lambda$new$1, $String*)},
		{"lambda$setMaxCapacity$3", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$setMaxCapacity$3, $String*, int32_t)},
		{"lambda$setMaxCapacity0$4", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$setMaxCapacity0$4, $String*, int32_t)},
		{"lambda$sizeUpdate$13", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Encoder, lambda$sizeUpdate$13, $String*, int32_t)},
		{"literal", "(ILjava/lang/CharSequence;Z)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, literal, void, int32_t, $CharSequence*, bool), "java.lang.IndexOutOfBoundsException"},
		{"literal", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, literal, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"literalNeverIndexed", "(ILjava/lang/CharSequence;Z)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, literalNeverIndexed, void, int32_t, $CharSequence*, bool), "java.lang.IndexOutOfBoundsException"},
		{"literalNeverIndexed", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, literalNeverIndexed, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"literalWithIndexing", "(ILjava/lang/CharSequence;Z)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, literalWithIndexing, void, int32_t, $CharSequence*, bool), "java.lang.IndexOutOfBoundsException"},
		{"literalWithIndexing", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, literalWithIndexing, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"prependWithCapacityUpdate", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PRIVATE, $method(Encoder, prependWithCapacityUpdate, bool, $ByteBuffer*)},
		{"setMaxCapacity", "(I)V", nullptr, $PUBLIC, $virtualMethod(Encoder, setMaxCapacity, void, int32_t)},
		{"setMaxCapacity0", "(I)V", nullptr, $PRIVATE, $method(Encoder, setMaxCapacity0, void, int32_t)},
		{"sizeUpdate", "(I)V", nullptr, $PROTECTED | $FINAL, $method(Encoder, sizeUpdate, void, int32_t), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.hpack.Encoder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Encoder, name, initialize, &classInfo$$, Encoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Encoder);
	});
	return class$;
}

$Class* Encoder::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk