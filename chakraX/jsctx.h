#pragma once

#include <KR3/js/js.h>

void createJsContext(kr::JsRawContext newContext) noexcept;
void destroyJsContext() noexcept;

extern kr::Manual<kr::JsContext> g_ctx;
