#include <java/util/logging/XMLFormatter.h>
#include <java/lang/Appendable.h>
#include <java/lang/StackTraceElement.h>
#include <java/nio/charset/Charset.h>
#include <java/time/Instant.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/util/Calendar.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/ResourceBundle.h>
#include <java/util/logging/Formatter.h>
#include <java/util/logging/Handler.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/LogRecord.h>
#include <jcpp.h>

#undef DAY_OF_MONTH
#undef HOUR_OF_DAY
#undef ISO_INSTANT
#undef MINUTE
#undef MONTH
#undef SECOND
#undef YEAR

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $Charset = ::java::nio::charset::Charset;
using $Instant = ::java::time::Instant;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $Calendar = ::java::util::Calendar;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Formatter = ::java::util::logging::Formatter;
using $Handler = ::java::util::logging::Handler;
using $LogManager = ::java::util::logging::LogManager;
using $LogRecord = ::java::util::logging::LogRecord;

namespace java {
	namespace util {
		namespace logging {

void XMLFormatter::init$() {
	$useLocalObjectStack();
	$Formatter::init$();
	$set(this, manager, $LogManager::getLogManager());
	this->useInstant = (this->manager == nullptr) || this->manager->getBooleanProperty($$str({$(this->getClass()->getName()), ".useInstant"_s}), true);
}

void XMLFormatter::a2($StringBuilder* sb, int32_t x) {
	if (x < 10) {
		$nc(sb)->append(u'0');
	}
	$nc(sb)->append(x);
}

void XMLFormatter::appendISO8601($StringBuilder* sb, int64_t millis) {
	$var($GregorianCalendar, cal, $new($GregorianCalendar));
	cal->setTimeInMillis(millis);
	$nc(sb)->append(cal->get($Calendar::YEAR));
	sb->append(u'-');
	a2(sb, cal->get($Calendar::MONTH) + 1);
	sb->append(u'-');
	a2(sb, cal->get($Calendar::DAY_OF_MONTH));
	sb->append(u'T');
	a2(sb, cal->get($Calendar::HOUR_OF_DAY));
	sb->append(u':');
	a2(sb, cal->get($Calendar::MINUTE));
	sb->append(u':');
	a2(sb, cal->get($Calendar::SECOND));
}

void XMLFormatter::escape($StringBuilder* sb, $String* text$renamed) {
	$var($String, text, text$renamed);
	if (text == nullptr) {
		$assign(text, "<null>"_s);
	}
	for (int32_t i = 0; i < $nc(text)->length(); ++i) {
		char16_t ch = text->charAt(i);
		if (ch == u'<') {
			$nc(sb)->append("&lt;"_s);
		} else if (ch == u'>') {
			$nc(sb)->append("&gt;"_s);
		} else if (ch == u'&') {
			$nc(sb)->append("&amp;"_s);
		} else {
			$nc(sb)->append(ch);
		}
	}
}

$String* XMLFormatter::format($LogRecord* record) {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, 500));
	sb->append("<record>\n"_s);
	$var($Instant, instant, $nc(record)->getInstant());
	sb->append("  <date>"_s);
	if (this->useInstant) {
		$init($DateTimeFormatter);
		$nc($DateTimeFormatter::ISO_INSTANT)->formatTo(instant, sb);
	} else {
		appendISO8601(sb, $nc(instant)->toEpochMilli());
	}
	sb->append("</date>\n"_s);
	sb->append("  <millis>"_s);
	sb->append($nc(instant)->toEpochMilli());
	sb->append("</millis>\n"_s);
	int32_t nanoAdjustment = instant->getNano() % 1000000;
	if (this->useInstant && nanoAdjustment != 0) {
		sb->append("  <nanos>"_s);
		sb->append(nanoAdjustment);
		sb->append("</nanos>\n"_s);
	}
	sb->append("  <sequence>"_s);
	sb->append(record->getSequenceNumber());
	sb->append("</sequence>\n"_s);
	$var($String, name, record->getLoggerName());
	if (name != nullptr) {
		sb->append("  <logger>"_s);
		escape(sb, name);
		sb->append("</logger>\n"_s);
	}
	sb->append("  <level>"_s);
	escape(sb, $($$nc(record->getLevel())->toString()));
	sb->append("</level>\n"_s);
	if (record->getSourceClassName() != nullptr) {
		sb->append("  <class>"_s);
		escape(sb, $(record->getSourceClassName()));
		sb->append("</class>\n"_s);
	}
	if (record->getSourceMethodName() != nullptr) {
		sb->append("  <method>"_s);
		escape(sb, $(record->getSourceMethodName()));
		sb->append("</method>\n"_s);
	}
	sb->append("  <thread>"_s);
	sb->append(record->getLongThreadID());
	sb->append("</thread>\n"_s);
	if (record->getMessage() != nullptr) {
		$var($String, message, formatMessage(record));
		sb->append("  <message>"_s);
		escape(sb, message);
		sb->append("</message>"_s);
		sb->append("\n"_s);
	}
	$var($ResourceBundle, bundle, record->getResourceBundle());
	try {
		if (bundle != nullptr && bundle->getString($(record->getMessage())) != nullptr) {
			sb->append("  <key>"_s);
			escape(sb, $(record->getMessage()));
			sb->append("</key>\n"_s);
			sb->append("  <catalog>"_s);
			escape(sb, $(record->getResourceBundleName()));
			sb->append("</catalog>\n"_s);
		}
	} catch ($Exception& ex) {
	}
	$var($ObjectArray, parameters, record->getParameters());
	if (parameters != nullptr && parameters->length != 0 && $$nc(record->getMessage())->indexOf(u'{') == -1) {
		$var($ObjectArray, arr$, parameters);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, parameter, arr$->get(i$));
			{
				sb->append("  <param>"_s);
				try {
					escape(sb, $($nc(parameter)->toString()));
				} catch ($Exception& ex) {
					sb->append("???"_s);
				}
				sb->append("</param>\n"_s);
			}
		}
	}
	if (record->getThrown() != nullptr) {
		$var($Throwable, th, record->getThrown());
		sb->append("  <exception>\n"_s);
		sb->append("    <message>"_s);
		escape(sb, $($nc(th)->toString()));
		sb->append("</message>\n"_s);
		$var($StackTraceElementArray, trace, th->getStackTrace());
		{
			$var($StackTraceElementArray, arr$, trace);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($StackTraceElement, frame, arr$->get(i$));
				{
					sb->append("    <frame>\n"_s);
					sb->append("      <class>"_s);
					escape(sb, $($nc(frame)->getClassName()));
					sb->append("</class>\n"_s);
					sb->append("      <method>"_s);
					escape(sb, $(frame->getMethodName()));
					sb->append("</method>\n"_s);
					if (frame->getLineNumber() >= 0) {
						sb->append("      <line>"_s);
						sb->append(frame->getLineNumber());
						sb->append("</line>\n"_s);
					}
					sb->append("    </frame>\n"_s);
				}
			}
		}
		sb->append("  </exception>\n"_s);
	}
	sb->append("</record>\n"_s);
	return sb->toString();
}

$String* XMLFormatter::getHead($Handler* h) {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($String, encoding, nullptr);
	sb->append("<?xml version=\"1.0\""_s);
	if (h != nullptr) {
		$assign(encoding, h->getEncoding());
	} else {
		$assign(encoding, nullptr);
	}
	if (encoding == nullptr) {
		$assign(encoding, $$nc($Charset::defaultCharset())->name());
	}
	try {
		$var($Charset, cs, $Charset::forName(encoding));
		$assign(encoding, $nc(cs)->name());
	} catch ($Exception& ex) {
	}
	sb->append(" encoding=\""_s);
	sb->append(encoding);
	sb->append("\""_s);
	sb->append(" standalone=\"no\"?>\n"_s);
	sb->append("<!DOCTYPE log SYSTEM \"logger.dtd\">\n"_s);
	sb->append("<log>\n"_s);
	return sb->toString();
}

$String* XMLFormatter::getTail($Handler* h) {
	return "</log>\n"_s;
}

XMLFormatter::XMLFormatter() {
}

$Class* XMLFormatter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"manager", "Ljava/util/logging/LogManager;", nullptr, $PRIVATE | $FINAL, $field(XMLFormatter, manager)},
		{"useInstant", "Z", nullptr, $PRIVATE | $FINAL, $field(XMLFormatter, useInstant)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLFormatter, init$, void)},
		{"a2", "(Ljava/lang/StringBuilder;I)V", nullptr, $PRIVATE, $method(XMLFormatter, a2, void, $StringBuilder*, int32_t)},
		{"appendISO8601", "(Ljava/lang/StringBuilder;J)V", nullptr, $PRIVATE, $method(XMLFormatter, appendISO8601, void, $StringBuilder*, int64_t)},
		{"escape", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLFormatter, escape, void, $StringBuilder*, $String*)},
		{"format", "(Ljava/util/logging/LogRecord;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLFormatter, format, $String*, $LogRecord*)},
		{"getHead", "(Ljava/util/logging/Handler;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLFormatter, getHead, $String*, $Handler*)},
		{"getTail", "(Ljava/util/logging/Handler;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLFormatter, getTail, $String*, $Handler*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.logging.XMLFormatter",
		"java.util.logging.Formatter",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLFormatter);
	});
	return class$;
}

$Class* XMLFormatter::class$ = nullptr;

		} // logging
	} // util
} // java