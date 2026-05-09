#include <jdk/internal/net/http/hpack/Decoder.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Appendable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/hpack/Decoder$1.h>
#include <jdk/internal/net/http/hpack/Decoder$State.h>
#include <jdk/internal/net/http/hpack/DecodingCallback.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger$Level.h>
#include <jdk/internal/net/http/hpack/HPACK$Logger.h>
#include <jdk/internal/net/http/hpack/HPACK.h>
#include <jdk/internal/net/http/hpack/IntegerReader.h>
#include <jdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField.h>
#include <jdk/internal/net/http/hpack/SimpleHeaderTable.h>
#include <jdk/internal/net/http/hpack/StringReader.h>
#include <jcpp.h>

#undef DECODERS_IDS
#undef EXTRA
#undef INDEXED
#undef LITERAL
#undef LITERAL_NEVER_INDEXED
#undef LITERAL_WITH_INDEXING
#undef NORMAL
#undef READY
#undef SIZE_UPDATE

using $Decoder$StateArray = $Array<::jdk::internal::net::http::hpack::Decoder$State>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $Supplier = ::java::util::function::Supplier;
using $Decoder$1 = ::jdk::internal::net::http::hpack::Decoder$1;
using $Decoder$State = ::jdk::internal::net::http::hpack::Decoder$State;
using $DecodingCallback = ::jdk::internal::net::http::hpack::DecodingCallback;
using $HPACK = ::jdk::internal::net::http::hpack::HPACK;
using $HPACK$Logger$Level = ::jdk::internal::net::http::hpack::HPACK$Logger$Level;
using $IntegerReader = ::jdk::internal::net::http::hpack::IntegerReader;
using $SimpleHeaderTable = ::jdk::internal::net::http::hpack::SimpleHeaderTable;
using $SimpleHeaderTable$HeaderField = ::jdk::internal::net::http::hpack::SimpleHeaderTable$HeaderField;
using $StringReader = ::jdk::internal::net::http::hpack::StringReader;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class Decoder$$Lambda$lambda$new$0 : public $Supplier {
	$class(Decoder$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t capacity) {
		this->capacity = capacity;
	}
	virtual $Object* get() override {
		return $of(Decoder::lambda$new$0(capacity));
	}
	int32_t capacity = 0;
};
$Class* Decoder$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"capacity", "I", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$new$0, capacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$new$0, init$, void, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$new$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$new$0::class$ = nullptr;

class Decoder$$Lambda$lambda$new$1$1 : public $Supplier {
	$class(Decoder$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$new$1());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$new$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$new$1$1, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$new$1$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$new$1$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$new$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$new$1$1);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$new$1$1::class$ = nullptr;

class Decoder$$Lambda$lambda$setMaxCapacity$2$2 : public $Supplier {
	$class(Decoder$$Lambda$lambda$setMaxCapacity$2$2, $NO_CLASS_INIT, $Supplier)
public:
	void init$(int32_t capacity) {
		this->capacity = capacity;
	}
	virtual $Object* get() override {
		return $of(Decoder::lambda$setMaxCapacity$2(capacity));
	}
	int32_t capacity = 0;
};
$Class* Decoder$$Lambda$lambda$setMaxCapacity$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"capacity", "I", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$setMaxCapacity$2$2, capacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$setMaxCapacity$2$2, init$, void, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$setMaxCapacity$2$2, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$setMaxCapacity$2$2",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$setMaxCapacity$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$setMaxCapacity$2$2);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$setMaxCapacity$2$2::class$ = nullptr;

class Decoder$$Lambda$lambda$decode$3$3 : public $Supplier {
	$class(Decoder$$Lambda$lambda$decode$3$3, $NO_CLASS_INIT, $Supplier)
public:
	void init$($ByteBuffer* headerBlock, bool endOfHeaderBlock) {
		$set(this, headerBlock, headerBlock);
		this->endOfHeaderBlock = endOfHeaderBlock;
	}
	virtual $Object* get() override {
		return $of(Decoder::lambda$decode$3(headerBlock, endOfHeaderBlock));
	}
	$ByteBuffer* headerBlock = nullptr;
	bool endOfHeaderBlock = false;
};
$Class* Decoder$$Lambda$lambda$decode$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"headerBlock", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$decode$3$3, headerBlock)},
		{"endOfHeaderBlock", "Z", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$decode$3$3, endOfHeaderBlock)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/ByteBuffer;Z)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$decode$3$3, init$, void, $ByteBuffer*, bool)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$decode$3$3, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$decode$3$3",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$decode$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$decode$3$3);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$decode$3$3::class$ = nullptr;

class Decoder$$Lambda$lambda$decode$4$4 : public $Supplier {
	$class(Decoder$$Lambda$lambda$decode$4$4, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$decode$4());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$decode$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$decode$4$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$decode$4$4, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$decode$4$4, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$decode$4$4",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$decode$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$decode$4$4);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$decode$4$4::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeReady$5$5 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeReady$5$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Decoder$State* s, int32_t b) {
		$set(this, s, s);
		this->b = b;
	}
	virtual $Object* get() override {
		return $of(Decoder::lambda$resumeReady$5(s, b));
	}
	$Decoder$State* s = nullptr;
	int32_t b = 0;
};
$Class* Decoder$$Lambda$lambda$resumeReady$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"s", "Ljdk/internal/net/http/hpack/Decoder$State;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeReady$5$5, s)},
		{"b", "I", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeReady$5$5, b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder$State;I)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeReady$5$5, init$, void, $Decoder$State*, int32_t)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeReady$5$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeReady$5$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeReady$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeReady$5$5);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeReady$5$5::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeIndexed$6$6 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeIndexed$6$6, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeIndexed$6());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeIndexed$6$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeIndexed$6$6, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeIndexed$6$6, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeIndexed$6$6, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeIndexed$6$6",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeIndexed$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeIndexed$6$6);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeIndexed$6$6::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeLiteral$7$7 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeLiteral$7$7, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeLiteral$7());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeLiteral$7$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeLiteral$7$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeLiteral$7$7, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeLiteral$7$7, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteral$7$7",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeLiteral$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeLiteral$7$7);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeLiteral$7$7::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeLiteral$8$8 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeLiteral$8$8, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeLiteral$8());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeLiteral$8$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeLiteral$8$8, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeLiteral$8$8, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeLiteral$8$8, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteral$8$8",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeLiteral$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeLiteral$8$8);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeLiteral$8$8::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeLiteralWithIndexing$9());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst, $String* n) {
		$set(this, inst$, inst);
		$set(this, n, n);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeLiteralWithIndexing$10(n));
	}
	Decoder* inst$ = nullptr;
	$String* n = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10, inst$)},
		{"n", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10, n)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10, init$, void, Decoder*, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeLiteralNeverIndexed$11());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeLiteralNeverIndexed$12());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12::class$ = nullptr;

class Decoder$$Lambda$lambda$resumeSizeUpdate$13$13 : public $Supplier {
	$class(Decoder$$Lambda$lambda$resumeSizeUpdate$13$13, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Decoder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		return $of($nc(inst$)->lambda$resumeSizeUpdate$13());
	}
	Decoder* inst$ = nullptr;
};
$Class* Decoder$$Lambda$lambda$resumeSizeUpdate$13$13::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Decoder$$Lambda$lambda$resumeSizeUpdate$13$13, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/hpack/Decoder;)V", nullptr, $PUBLIC, $method(Decoder$$Lambda$lambda$resumeSizeUpdate$13$13, init$, void, Decoder*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Decoder$$Lambda$lambda$resumeSizeUpdate$13$13, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeSizeUpdate$13$13",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Decoder$$Lambda$lambda$resumeSizeUpdate$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder$$Lambda$lambda$resumeSizeUpdate$13$13);
	});
	return class$;
}
$Class* Decoder$$Lambda$lambda$resumeSizeUpdate$13$13::class$ = nullptr;

bool Decoder::$assertionsDisabled = false;
$AtomicLong* Decoder::DECODERS_IDS = nullptr;
$List* Decoder::states = nullptr;

void Decoder::init$(int32_t capacity) {
	$useLocalObjectStack();
	$init($Decoder$State);
	$set(this, state, $Decoder$State::READY);
	this->id = Decoder::DECODERS_IDS->incrementAndGet();
	$set(this, logger, $$nc($HPACK::getLogger())->subLogger($$str({"Decoder#"_s, $$str(this->id)})));
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$new$0, capacity));
	}
	if (this->logger->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$new$1$1, this));
	}
	setMaxCapacity0(capacity);
	$set(this, table, $new($SimpleHeaderTable, capacity, $(this->logger->subLogger("HeaderTable"_s))));
	$set(this, integerReader, $new($IntegerReader));
	$set(this, stringReader, $new($StringReader));
	$set(this, name, $new($StringBuilder, 512));
	$set(this, value, $new($StringBuilder, 1024));
}

void Decoder::setMaxCapacity(int32_t capacity) {
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$setMaxCapacity$2$2, capacity));
	}
	setMaxCapacity0(capacity);
}

void Decoder::setMaxCapacity0(int32_t capacity) {
	$useLocalObjectStack();
	if (capacity < 0) {
		$throwNew($IllegalArgumentException, $$str({"capacity >= 0: "_s, $$str(capacity)}));
	}
	this->capacity = capacity;
}

void Decoder::decode($ByteBuffer* headerBlock, bool endOfHeaderBlock, $DecodingCallback* consumer) {
	$useLocalObjectStack();
	$Objects::requireNonNull(headerBlock, "headerBlock"_s);
	$Objects::requireNonNull(consumer, "consumer"_s);
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$decode$3$3, headerBlock, endOfHeaderBlock));
	}
	while ($nc(headerBlock)->hasRemaining()) {
		proceed(headerBlock, consumer);
	}
	$init($Decoder$State);
	if (endOfHeaderBlock && this->state != $Decoder$State::READY) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$decode$4$4, this));
		$throwNew($IOException, "Unexpected end of header block"_s);
	}
}

void Decoder::proceed($ByteBuffer* input, $DecodingCallback* action) {
	$init($Decoder$1);
	switch ($nc($Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State)->get($nc((this->state))->ordinal())) {
	case 1:
		resumeReady(input);
		break;
	case 2:
		resumeIndexed(input, action);
		break;
	case 3:
		resumeLiteral(input, action);
		break;
	case 4:
		resumeLiteralWithIndexing(input, action);
		break;
	case 5:
		resumeLiteralNeverIndexed(input, action);
		break;
	case 6:
		resumeSizeUpdate(input, action);
		break;
	default:
		$throwNew($InternalError, $$str({"Unexpected decoder state: "_s, this->state}));
	}
}

void Decoder::resumeReady($ByteBuffer* input) {
	$useLocalObjectStack();
	int32_t b = $nc(input)->get($nc(input)->position()) & 0xff;
	$Decoder$State* s = $cast($Decoder$State, $nc(Decoder::states)->get(b));
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::EXTRA)) {
		this->logger->log($HPACK$Logger$Level::EXTRA, $$new(Decoder$$Lambda$lambda$resumeReady$5$5, s, b));
	}
	$init($Decoder$1);
	switch ($nc($Decoder$1::$SwitchMap$jdk$internal$net$http$hpack$Decoder$State)->get($nc((s))->ordinal())) {
	case 2:
		this->integerReader->configure(7);
		$set(this, state, $Decoder$State::INDEXED);
		this->firstValueIndex = true;
		break;
	case 3:
		$set(this, state, $Decoder$State::LITERAL);
		this->firstValueIndex = (b & 0x0f) != 0;
		if (this->firstValueIndex) {
			this->integerReader->configure(4);
		}
		break;
	case 4:
		$set(this, state, $Decoder$State::LITERAL_WITH_INDEXING);
		this->firstValueIndex = (b & 0x3f) != 0;
		if (this->firstValueIndex) {
			this->integerReader->configure(6);
		}
		break;
	case 5:
		$set(this, state, $Decoder$State::LITERAL_NEVER_INDEXED);
		this->firstValueIndex = (b & 0x0f) != 0;
		if (this->firstValueIndex) {
			this->integerReader->configure(4);
		}
		break;
	case 6:
		this->integerReader->configure(5);
		$set(this, state, $Decoder$State::SIZE_UPDATE);
		this->firstValueIndex = true;
		break;
	default:
		$throwNew($InternalError, $($String::valueOf(s)));
	}
	if (!this->firstValueIndex) {
		input->get();
	}
}

void Decoder::resumeIndexed($ByteBuffer* input, $DecodingCallback* action) {
	$useLocalObjectStack();
	if (!this->integerReader->read(input)) {
		return;
	}
	this->intValue = this->integerReader->get();
	this->integerReader->reset();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeIndexed$6$6, this));
	}
	$var($Throwable, var$0, nullptr);
	try {
		$var($SimpleHeaderTable$HeaderField, f, getHeaderFieldAt(this->intValue));
		$nc(action)->onIndexed(this->intValue, $nc(f)->name, $nc(f)->value);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init($Decoder$State);
		$set(this, state, $Decoder$State::READY);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$SimpleHeaderTable$HeaderField* Decoder::getHeaderFieldAt(int32_t index) {
	$var($SimpleHeaderTable$HeaderField, f, nullptr);
	try {
		$assign(f, this->table->get(index));
	} catch ($IndexOutOfBoundsException& e) {
		$throwNew($IOException, "header fields table index"_s, e);
	}
	return f;
}

void Decoder::resumeLiteral($ByteBuffer* input, $DecodingCallback* action) {
	$useLocalObjectStack();
	if (!completeReading(input)) {
		return;
	}
	$var($Throwable, var$0, nullptr);
	try {
		if (this->firstValueIndex) {
			$init($HPACK$Logger$Level);
			if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
				this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeLiteral$7$7, this));
			}
			$var($SimpleHeaderTable$HeaderField, f, getHeaderFieldAt(this->intValue));
			$nc(action)->onLiteral(this->intValue, $nc(f)->name, this->value, this->valueHuffmanEncoded);
		} else {
			$init($HPACK$Logger$Level);
			if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
				this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeLiteral$8$8, this));
			}
			$nc(action)->onLiteral(this->name, this->nameHuffmanEncoded, this->value, this->valueHuffmanEncoded);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		cleanUpAfterReading();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Decoder::resumeLiteralWithIndexing($ByteBuffer* input, $DecodingCallback* action) {
	$useLocalObjectStack();
	if (!completeReading(input)) {
		return;
	}
	$var($Throwable, var$0, nullptr);
	try {
		$var($String, n, nullptr);
		$var($String, v, this->value->toString());
		if (this->firstValueIndex) {
			$init($HPACK$Logger$Level);
			if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
				this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9, this));
			}
			$var($SimpleHeaderTable$HeaderField, f, getHeaderFieldAt(this->intValue));
			$assign(n, $nc(f)->name);
			$nc(action)->onLiteralWithIndexing(this->intValue, n, v, this->valueHuffmanEncoded);
		} else {
			$assign(n, this->name->toString());
			$init($HPACK$Logger$Level);
			if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
				this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10, this, n));
			}
			$nc(action)->onLiteralWithIndexing(n, this->nameHuffmanEncoded, v, this->valueHuffmanEncoded);
		}
		this->table->put(n, v);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		cleanUpAfterReading();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Decoder::resumeLiteralNeverIndexed($ByteBuffer* input, $DecodingCallback* action) {
	$useLocalObjectStack();
	if (!completeReading(input)) {
		return;
	}
	$var($Throwable, var$0, nullptr);
	try {
		if (this->firstValueIndex) {
			$init($HPACK$Logger$Level);
			if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
				this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11, this));
			}
			$var($SimpleHeaderTable$HeaderField, f, getHeaderFieldAt(this->intValue));
			$nc(action)->onLiteralNeverIndexed(this->intValue, $nc(f)->name, this->value, this->valueHuffmanEncoded);
		} else {
			$init($HPACK$Logger$Level);
			if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
				this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12, this));
			}
			$nc(action)->onLiteralNeverIndexed(this->name, this->nameHuffmanEncoded, this->value, this->valueHuffmanEncoded);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		cleanUpAfterReading();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Decoder::resumeSizeUpdate($ByteBuffer* input, $DecodingCallback* action) {
	$useLocalObjectStack();
	if (!this->integerReader->read(input)) {
		return;
	}
	this->intValue = this->integerReader->get();
	$init($HPACK$Logger$Level);
	if ($nc(this->logger)->isLoggable($HPACK$Logger$Level::NORMAL)) {
		this->logger->log($HPACK$Logger$Level::NORMAL, $$new(Decoder$$Lambda$lambda$resumeSizeUpdate$13$13, this));
	}
	if (!Decoder::$assertionsDisabled && !(this->intValue >= 0)) {
		$throwNew($AssertionError);
	}
	if (this->intValue > this->capacity) {
		$throwNew($IOException, $($String::format("Received capacity exceeds expected: capacity=%s, expected=%s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(this->intValue)),
			$($Integer::valueOf(this->capacity))
		}))));
	}
	this->integerReader->reset();
	$var($Throwable, var$0, nullptr);
	try {
		$nc(action)->onSizeUpdate(this->intValue);
		this->table->setMaxSize(this->intValue);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init($Decoder$State);
		$set(this, state, $Decoder$State::READY);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool Decoder::completeReading($ByteBuffer* input) {
	if (!this->firstValueRead) {
		if (this->firstValueIndex) {
			if (!this->integerReader->read(input)) {
				return false;
			}
			this->intValue = this->integerReader->get();
			this->integerReader->reset();
		} else {
			if (!this->stringReader->read(input, this->name)) {
				return false;
			}
			this->nameHuffmanEncoded = this->stringReader->isHuffmanEncoded();
			this->stringReader->reset();
		}
		this->firstValueRead = true;
		return false;
	} else if (!this->stringReader->read(input, this->value)) {
		return false;
	}
	this->valueHuffmanEncoded = this->stringReader->isHuffmanEncoded();
	this->stringReader->reset();
	return true;
}

void Decoder::cleanUpAfterReading() {
	this->name->setLength(0);
	this->value->setLength(0);
	this->firstValueRead = false;
	$init($Decoder$State);
	$set(this, state, $Decoder$State::READY);
}

$SimpleHeaderTable* Decoder::getTable() {
	return this->table;
}

$String* Decoder::lambda$resumeSizeUpdate$13() {
	$useLocalObjectStack();
	return $String::format("dynamic table size update %s"_s, $$new($ObjectArray, {$($Integer::valueOf(this->intValue))}));
}

$String* Decoder::lambda$resumeLiteralNeverIndexed$12() {
	$useLocalObjectStack();
	return $String::format("literal never indexed (\'%s\', huffman=%b, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		this->name,
		$($Boolean::valueOf(this->nameHuffmanEncoded)),
		this->value,
		$($Boolean::valueOf(this->valueHuffmanEncoded))
	}));
}

$String* Decoder::lambda$resumeLiteralNeverIndexed$11() {
	$useLocalObjectStack();
	return $String::format("literal never indexed (%s, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		$($Integer::valueOf(this->intValue)),
		this->value,
		$($Boolean::valueOf(this->valueHuffmanEncoded))
	}));
}

$String* Decoder::lambda$resumeLiteralWithIndexing$10($String* n) {
	$useLocalObjectStack();
	return $String::format("literal with incremental indexing (\'%s\', huffman=%b, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		n,
		$($Boolean::valueOf(this->nameHuffmanEncoded)),
		this->value,
		$($Boolean::valueOf(this->valueHuffmanEncoded))
	}));
}

$String* Decoder::lambda$resumeLiteralWithIndexing$9() {
	$useLocalObjectStack();
	return $String::format("literal with incremental indexing (%s, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		$($Integer::valueOf(this->intValue)),
		this->value,
		$($Boolean::valueOf(this->valueHuffmanEncoded))
	}));
}

$String* Decoder::lambda$resumeLiteral$8() {
	$useLocalObjectStack();
	return $String::format("literal without indexing (\'%s\', huffman=%b, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		this->name,
		$($Boolean::valueOf(this->nameHuffmanEncoded)),
		this->value,
		$($Boolean::valueOf(this->valueHuffmanEncoded))
	}));
}

$String* Decoder::lambda$resumeLiteral$7() {
	$useLocalObjectStack();
	return $String::format("literal without indexing (%s, \'%s\', huffman=%b)"_s, $$new($ObjectArray, {
		$($Integer::valueOf(this->intValue)),
		this->value,
		$($Boolean::valueOf(this->valueHuffmanEncoded))
	}));
}

$String* Decoder::lambda$resumeIndexed$6() {
	$useLocalObjectStack();
	return $String::format("indexed %s"_s, $$new($ObjectArray, {$($Integer::valueOf(this->intValue))}));
}

$String* Decoder::lambda$resumeReady$5($Decoder$State* s, int32_t b) {
	$init(Decoder);
	$useLocalObjectStack();
	return $String::format("next binary representation %s (first byte 0x%02x)"_s, $$new($ObjectArray, {
		s,
		$($Integer::valueOf(b))
	}));
}

$String* Decoder::lambda$decode$4() {
	return $String::format("unexpected end of %s representation"_s, $$new($ObjectArray, {this->state}));
}

$String* Decoder::lambda$decode$3($ByteBuffer* headerBlock, bool endOfHeaderBlock) {
	$init(Decoder);
	$useLocalObjectStack();
	return $String::format("reading %s, end of header block? %s"_s, $$new($ObjectArray, {
		headerBlock,
		$($Boolean::valueOf(endOfHeaderBlock))
	}));
}

$String* Decoder::lambda$setMaxCapacity$2(int32_t capacity) {
	$init(Decoder);
	$useLocalObjectStack();
	return $String::format("setting maximum table size to %s"_s, $$new($ObjectArray, {$($Integer::valueOf(capacity))}));
}

$String* Decoder::lambda$new$1() {
	$useLocalObjectStack();
	$var($String, hashCode, $Integer::toHexString($System::identityHashCode(this)));
	return $String::format("toString=\'%s\', identityHashCode=%s"_s, $$new($ObjectArray, {
		$(toString()),
		hashCode
	}));
}

$String* Decoder::lambda$new$0(int32_t capacity) {
	$init(Decoder);
	$useLocalObjectStack();
	return $String::format("new decoder with maximum table size %s"_s, $$new($ObjectArray, {$($Integer::valueOf(capacity))}));
}

void Decoder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	Decoder::$assertionsDisabled = !Decoder::class$->desiredAssertionStatus();
	$assignStatic(Decoder::DECODERS_IDS, $new($AtomicLong));
	{
		$var($Decoder$StateArray, s, $new($Decoder$StateArray, 256));
		for (int32_t i = 0; i < s->length; ++i) {
			if ((i & 0x80) == 0x80) {
				s->set(i, $Decoder$State::INDEXED);
			} else if ((i & 0xc0) == 0x40) {
				s->set(i, $Decoder$State::LITERAL_WITH_INDEXING);
			} else if ((i & 0xe0) == 0x20) {
				s->set(i, $Decoder$State::SIZE_UPDATE);
			} else if ((i & 0xf0) == 0x10) {
				s->set(i, $Decoder$State::LITERAL_NEVER_INDEXED);
			} else if ((i & 0xf0) == 0) {
				s->set(i, $Decoder$State::LITERAL);
			} else {
				$throwNew($InternalError, $($String::valueOf(i)));
			}
		}
		$assignStatic(Decoder::states, $List::of(s));
	}
}

Decoder::Decoder() {
}

$Class* Decoder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$new$0")) {
			return Decoder$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$new$1$1")) {
			return Decoder$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$setMaxCapacity$2$2")) {
			return Decoder$$Lambda$lambda$setMaxCapacity$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$decode$3$3")) {
			return Decoder$$Lambda$lambda$decode$3$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$decode$4$4")) {
			return Decoder$$Lambda$lambda$decode$4$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeReady$5$5")) {
			return Decoder$$Lambda$lambda$resumeReady$5$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeIndexed$6$6")) {
			return Decoder$$Lambda$lambda$resumeIndexed$6$6::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteral$7$7")) {
			return Decoder$$Lambda$lambda$resumeLiteral$7$7::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteral$8$8")) {
			return Decoder$$Lambda$lambda$resumeLiteral$8$8::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9")) {
			return Decoder$$Lambda$lambda$resumeLiteralWithIndexing$9$9::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10")) {
			return Decoder$$Lambda$lambda$resumeLiteralWithIndexing$10$10::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11")) {
			return Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$11$11::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12")) {
			return Decoder$$Lambda$lambda$resumeLiteralNeverIndexed$12$12::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.hpack.Decoder$$Lambda$lambda$resumeSizeUpdate$13$13")) {
			return Decoder$$Lambda$lambda$resumeSizeUpdate$13$13::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Decoder, $assertionsDisabled)},
		{"logger", "Ljdk/internal/net/http/hpack/HPACK$Logger;", nullptr, $PRIVATE | $FINAL, $field(Decoder, logger)},
		{"DECODERS_IDS", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Decoder, DECODERS_IDS)},
		{"states", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/net/http/hpack/Decoder$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Decoder, states)},
		{"id", "J", nullptr, $PRIVATE | $FINAL, $field(Decoder, id)},
		{"table", "Ljdk/internal/net/http/hpack/SimpleHeaderTable;", nullptr, $PRIVATE | $FINAL, $field(Decoder, table)},
		{"state", "Ljdk/internal/net/http/hpack/Decoder$State;", nullptr, $PRIVATE, $field(Decoder, state)},
		{"integerReader", "Ljdk/internal/net/http/hpack/IntegerReader;", nullptr, $PRIVATE | $FINAL, $field(Decoder, integerReader)},
		{"stringReader", "Ljdk/internal/net/http/hpack/StringReader;", nullptr, $PRIVATE | $FINAL, $field(Decoder, stringReader)},
		{"name", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(Decoder, name)},
		{"value", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(Decoder, value)},
		{"intValue", "I", nullptr, $PRIVATE, $field(Decoder, intValue)},
		{"firstValueRead", "Z", nullptr, $PRIVATE, $field(Decoder, firstValueRead)},
		{"firstValueIndex", "Z", nullptr, $PRIVATE, $field(Decoder, firstValueIndex)},
		{"nameHuffmanEncoded", "Z", nullptr, $PRIVATE, $field(Decoder, nameHuffmanEncoded)},
		{"valueHuffmanEncoded", "Z", nullptr, $PRIVATE, $field(Decoder, valueHuffmanEncoded)},
		{"capacity", "I", nullptr, $PRIVATE, $field(Decoder, capacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Decoder, init$, void, int32_t)},
		{"cleanUpAfterReading", "()V", nullptr, $PRIVATE, $method(Decoder, cleanUpAfterReading, void)},
		{"completeReading", "(Ljava/nio/ByteBuffer;)Z", nullptr, $PRIVATE, $method(Decoder, completeReading, bool, $ByteBuffer*), "java.io.IOException"},
		{"decode", "(Ljava/nio/ByteBuffer;ZLjdk/internal/net/http/hpack/DecodingCallback;)V", nullptr, $PUBLIC, $method(Decoder, decode, void, $ByteBuffer*, bool, $DecodingCallback*), "java.io.IOException"},
		{"getHeaderFieldAt", "(I)Ljdk/internal/net/http/hpack/SimpleHeaderTable$HeaderField;", nullptr, $PRIVATE, $method(Decoder, getHeaderFieldAt, $SimpleHeaderTable$HeaderField*, int32_t), "java.io.IOException"},
		{"getTable", "()Ljdk/internal/net/http/hpack/SimpleHeaderTable;", nullptr, 0, $method(Decoder, getTable, $SimpleHeaderTable*)},
		{"lambda$decode$3", "(Ljava/nio/ByteBuffer;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Decoder, lambda$decode$3, $String*, $ByteBuffer*, bool)},
		{"lambda$decode$4", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$decode$4, $String*)},
		{"lambda$new$0", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Decoder, lambda$new$0, $String*, int32_t)},
		{"lambda$new$1", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$new$1, $String*)},
		{"lambda$resumeIndexed$6", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeIndexed$6, $String*)},
		{"lambda$resumeLiteral$7", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeLiteral$7, $String*)},
		{"lambda$resumeLiteral$8", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeLiteral$8, $String*)},
		{"lambda$resumeLiteralNeverIndexed$11", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeLiteralNeverIndexed$11, $String*)},
		{"lambda$resumeLiteralNeverIndexed$12", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeLiteralNeverIndexed$12, $String*)},
		{"lambda$resumeLiteralWithIndexing$10", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeLiteralWithIndexing$10, $String*, $String*)},
		{"lambda$resumeLiteralWithIndexing$9", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeLiteralWithIndexing$9, $String*)},
		{"lambda$resumeReady$5", "(Ljdk/internal/net/http/hpack/Decoder$State;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Decoder, lambda$resumeReady$5, $String*, $Decoder$State*, int32_t)},
		{"lambda$resumeSizeUpdate$13", "()Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(Decoder, lambda$resumeSizeUpdate$13, $String*)},
		{"lambda$setMaxCapacity$2", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Decoder, lambda$setMaxCapacity$2, $String*, int32_t)},
		{"proceed", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/hpack/DecodingCallback;)V", nullptr, $PRIVATE, $method(Decoder, proceed, void, $ByteBuffer*, $DecodingCallback*), "java.io.IOException"},
		{"resumeIndexed", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/hpack/DecodingCallback;)V", nullptr, $PRIVATE, $method(Decoder, resumeIndexed, void, $ByteBuffer*, $DecodingCallback*), "java.io.IOException"},
		{"resumeLiteral", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/hpack/DecodingCallback;)V", nullptr, $PRIVATE, $method(Decoder, resumeLiteral, void, $ByteBuffer*, $DecodingCallback*), "java.io.IOException"},
		{"resumeLiteralNeverIndexed", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/hpack/DecodingCallback;)V", nullptr, $PRIVATE, $method(Decoder, resumeLiteralNeverIndexed, void, $ByteBuffer*, $DecodingCallback*), "java.io.IOException"},
		{"resumeLiteralWithIndexing", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/hpack/DecodingCallback;)V", nullptr, $PRIVATE, $method(Decoder, resumeLiteralWithIndexing, void, $ByteBuffer*, $DecodingCallback*), "java.io.IOException"},
		{"resumeReady", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(Decoder, resumeReady, void, $ByteBuffer*)},
		{"resumeSizeUpdate", "(Ljava/nio/ByteBuffer;Ljdk/internal/net/http/hpack/DecodingCallback;)V", nullptr, $PRIVATE, $method(Decoder, resumeSizeUpdate, void, $ByteBuffer*, $DecodingCallback*), "java.io.IOException"},
		{"setMaxCapacity", "(I)V", nullptr, $PUBLIC, $method(Decoder, setMaxCapacity, void, int32_t)},
		{"setMaxCapacity0", "(I)V", nullptr, $PRIVATE, $method(Decoder, setMaxCapacity0, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.hpack.Decoder$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"jdk.internal.net.http.hpack.Decoder$State", "jdk.internal.net.http.hpack.Decoder", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.hpack.Decoder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.hpack.Decoder$1,jdk.internal.net.http.hpack.Decoder$State"
	};
	$loadClass(Decoder, name, initialize, &classInfo$$, Decoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Decoder);
	});
	return class$;
}

$Class* Decoder::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk