/**************************************************************************************/
/*                                                                                    */
/*  Visualization Library                                                             */
/*  http://www.visualizationlibrary.org                                               */
/*                                                                                    */
/*  Copyright (c) 2005-2010, Michele Bosi                                             */
/*  All rights reserved.                                                              */
/*                                                                                    */
/*  Redistribution and use in source and binary forms, with or without modification,  */
/*  are permitted provided that the following conditions are met:                     */
/*                                                                                    */
/*  - Redistributions of source code must retain the above copyright notice, this     */
/*  list of conditions and the following disclaimer.                                  */
/*                                                                                    */
/*  - Redistributions in binary form must reproduce the above copyright notice, this  */
/*  list of conditions and the following disclaimer in the documentation and/or       */
/*  other materials provided with the distribution.                                   */
/*                                                                                    */
/*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND   */
/*  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED     */
/*  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE            */
/*  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR  */
/*  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES    */
/*  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;      */
/*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON    */
/*  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT           */
/*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS     */
/*  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                      */
/*                                                                                    */
/**************************************************************************************/

#ifndef VLX_INCLUDE_ONCE
#define VLX_INCLUDE_ONCE

#include <vlCore/Object.hpp>
#include <vlCore/Say.hpp>
#include <vlCore/Log.hpp>
#include <vlCore/BufferedStream.hpp>
#include <vlCore/Vector4.hpp>
#include <map>
#include <set>
#include <sstream>
#include <cstdlib>
#include <cstdarg>
#include <cstring>

#include <vlCore/VLXSerializer.hpp>
#include <vlCore/VLXVisitorLinker.hpp>
#include <vlCore/VLXVisitorCollectUID.hpp>
#include <vlCore/VLXValue.hpp>
#include <vlCore/VLXRegistry.hpp>
#include <vlCore/VLXParserVLT.hpp>
#include <vlCore/VLXParserVLB.hpp>
#include <vlCore/VLXParser.hpp>
#include <vlCore/VLXLinker.hpp>
#include <vlCore/VLXIO.hpp>
#include <vlCore/VLTTokenizer.hpp>
#include <vlCore/VLXVisitorExportToVLT.hpp>
#include <vlCore/VLXVisitorExportToVLB.hpp>

#endif