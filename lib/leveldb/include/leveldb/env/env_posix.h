// Copyright (c) 2014 The IndexFS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#ifndef STORAGE_LEVELDB_INCLUDE_ENV_POSIX_H_
#define STORAGE_LEVELDB_INCLUDE_ENV_POSIX_H_

namespace leveldb {
class Env;
extern Env* GetOrNewPosixEnv();
}

#endif /* STORAGE_LEVELDB_INCLUDE_ENV_POSIX_H_ */
